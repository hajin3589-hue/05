#include <stdio.h>

int main(void)
{
    char c;
    int num = 0;

    printf("input a string: ");

    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
        {
            num++;
        }
    }

    printf("the number of digits is %i\n", num);

    return 0;
}