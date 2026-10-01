#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0;
    int i;

    printf("input a number: ");
    scanf("%i", &number);

    for (i = 1; i <= number; i++)
    {
        sum = sum + i;
    }

    printf("The result is %i\n", sum);

    return 0;
}