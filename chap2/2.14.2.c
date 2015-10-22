#include <stdio.h>

int main ()

{
    double num1, num2, sum, sub, mul, dev;

    scanf("%lf", &num1);
    scanf("%lf", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    dev = num1 / num2;

    printf("The sum is: %lf\n", sum);
    printf("The Subtraction is: %lf\n", sub);
    printf("The Multiplication is: %lf\n", mul);
    printf("The Quotient is: %lf\n", dev);

    return 0;

}

