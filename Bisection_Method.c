#include <stdio.h>
#include <math.h>

double BisectionMethod(double left, double right, double error);
double func(double x);

int main(void)
{
    double root, leftLimit, rightLimit, error;

    leftLimit = 0.0;
    rightLimit = 10.0;
    error = 0.00000005;

    root = BisectionMethod(leftLimit, rightLimit, error);

    printf("%.8f", root);
    return 0;
}

double func(double x)
{
    double f_x = log(x + log(x)) - 2;
    return f_x;
}

double BisectionMethod(double left, double right, double error)
{
    double root = 0.0, previousRoot = 17826.0, deltaRoot = 1.0;

    while (deltaRoot > error)
    {
        root = (left + right) / 2.0;

        if (func(left) * func(root) < 0.0)
        {
            right = root;
        }
        else if (func(right) * func(root) < 0.0)
        {
            left = root;
        }
        else if (func(root) == 0.0)
        {
            break;
        }
        deltaRoot = fabs(previousRoot - root);
        previousRoot = root;
    }

    return root;
}