#include <stdio.h>

int main(void)
{
    int x;

    printf("input a number: ");
    scanf("%i", &x);

    if (x < 0)
    {
        x = -x;
    }

    printf("The absolute value is %i\n", x);

    return 0;
}