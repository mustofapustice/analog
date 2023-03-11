#include <stdio.h>

int add(int a, int b);
int multiply(int a, int b);
int subtract(int a, int b);
float divide(float a, float b);

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Addition of %d and %d is: %d\n", a, b, add(a, b));
    printf("Multiplication of %d and %d is: %d\n", a, b, multiply(a, b));
    printf("Subtraction of %d from %d is: %d\n", b, a, subtract(a, b));
    printf("Division of %d by %d is: %.2f\n", a, b, divide(a, b));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Cannot divide by zero.\n");
        return -1;
    }
    else
    {
        return a / b;
    }
}

