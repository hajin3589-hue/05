#include <stdio.h>

int main(void)
{
    int number;

    printf("input a number: ");
    scanf("%i", &number);

    if (number > 0)
    {
        printf("positive\n");
    }
    else if (number < 0)
    {
        printf("negative\n");
    }
    else
    {
        printf("zero\n");
    }

    return 0;
}