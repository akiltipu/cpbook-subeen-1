#include <stdio.h>

int main()

{
    double a, b, sum;

    printf("First Value: ");
    scanf("%lf", &a);

    printf("Second Value: ");
    scanf("%lf", &b);

    sum = a + b;

    printf("Sum is: %lf\n", sum);
    printf("Sum is: %0.2lf\n", sum);

    return 0;
}
