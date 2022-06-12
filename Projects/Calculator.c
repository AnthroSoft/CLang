// its a calculator program
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b;
    char calopt;
    printf("\n------Calculator------\n");
    printf("Enter The First Number\n");
    scanf("%f", &a);
    printf("Enter The Second Number\n");
    scanf("%f", &b);
    printf("Enter The Operation\n");
    scanf(" %c", &calopt);
    if (calopt == '+')
    {
        printf("Addition Of The Input Is %.1f\n", a + b);
    }
    else if (calopt == '-')
    {
        printf("Subtraction Of The Input Is %.1f\n", a - b);
    }
    else if (calopt == '/')
    {
        printf("Division Of The Input Is %.1f\n", a / b);
    }
    else if (calopt == '*')
    {
        printf("Multiplication Of The Input Is %.1f\n", a * b);
    }
    else
    {
        printf("Please Input A Valid Operation");
    }
}
