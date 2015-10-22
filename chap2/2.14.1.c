#include <stdio.h>

int main ()

{
    int num1, num2, sum, sub, mul, dev;

    scanf("%d", &num1);
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    dev = num1 / num2;

    printf("%d\n", sum);
    printf("%d\n", sub);
    printf("%d\n", mul);
    printf("%d\n", dev);

    return 0;

}
