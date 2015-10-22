/***********************************
 *Computer Programming: Part-1
 *Chapter 2: Data Type, Input and Output
 *Example: 2.14.1
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
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
