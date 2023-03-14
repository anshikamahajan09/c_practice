#include <stdio.h>
int main()
{
    int a, b;
    char sym;
    printf("Available operations are below. Choose any below one !!\n");
    printf("Press + for Addition\n");
    printf("Press - for Subtraction\n");

    printf("Press * for Multiplication\n");

    printf("Press / for Division\n");

    printf("Enter the operation symbol: ");
    scanf("%c", &sym);
    switch (sym)
    {
    case '+':
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
        printf("The addition of both the numbers is %d", a + b);
        break;
    case '-':
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
        printf("The subtraction of both the numbers is %d", a - b);
        break;
    case '*':
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
        printf("The multiplication of both the numbers is %d", a * b);
        break;
    case '/':
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
        printf("The division of both the numbers is %d", a / b);
        break;
    default:
        printf("Invalid Operation Choosed !!");
    }

    return 0;
}