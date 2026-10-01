#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("enter the calculation: ");
    scanf("%i %c %i", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("%i\n", a + b);
            break;

        case '-':
            printf("%i\n", a - b);
            break;

        case '*':
            printf("%i\n", a * b);
            break;

        case '/':
            printf("%i\n", a / b);
            break;
    }

    return 0;
}