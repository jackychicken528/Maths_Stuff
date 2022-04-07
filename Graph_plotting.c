#include <stdio.h>
#include <math.h>

double func(double x);

int main(void)
{
    double stepSize = 0.001;
    double start_x = -1.0;
    double end_x = 1.0;
    FILE *plot;
    plot = fopen("plot.txt", "w");
    fprintf(plot, "x        f(x)\n");
    printf("x        f(x)\n");
    while (start_x <= end_x)
    {
        fprintf(plot, "%f %f\n", start_x, func(start_x));
        printf("%f %f\n", start_x, func(start_x));
        start_x += stepSize;
    }
    fclose(plot);
    return 0;
}

double func(double x)
{
   double f_x = tan(x);
   return f_x;
}