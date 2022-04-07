#include <stdio.h>

int main(void)
{
    /* Get digits from user */
    int digits1, digits2;
    printf("Enter digits of the larger number: ");
    scanf("%d", &digits1);
    printf("Enter digits of the smaller number: ");
    scanf("%d", &digits2);

    /* Create and initialize arrays */
    int num1[digits1 + 1], num2[digits1 + 1], answer[digits1 + 1];
    num1[0] = 0;
    num2[0] = 0;
    answer[0] = 0;

    /* Get value of num1 */
    printf("Enter the larger number:\n");
    for (int i = 1; i < digits1 + 1; i++)
    {
        scanf("%1d", &num1[i]);
    }

    /* Get value of num2 */
    printf("Enter the smaller number:\n");
    for (int i = 1; i < digits1 + 1; i++)
    {
        if (i < digits1 + 1 - digits2)
        {
            num2[i] = 0;
        }
        else
        {
            scanf("%1d", &num2[i]);
        }
    }

    /* Addition */
    int carry = 0;
    for (int i = digits1; i >= 0; i--)
    {
        if (num1[i] + num2[i] + carry <= 9)
        {
            answer[i] = num1[i] + num2[i] + carry;
            carry = 0;
        }
        else
        {
            answer[i] = (num1[i] + num2[i] + carry) % 10;
            carry = 1;
        }
    }

    /* Print answer, ignore front 0 */
    printf("Answer:\n");
    if (answer[0] == 0)
    {
        for (int i = 1; i < digits1 + 1; i++)
        {
            printf("%d", answer[i]);
        }
    }
    else
    {
        for (int i = 0; i < digits1 + 1; i++)
        {
            printf("%d", answer[i]);
        }
    }
    getchar();
    getchar();
    return 0;
}
