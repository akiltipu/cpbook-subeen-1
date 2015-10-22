/***********************************
 *Computer Programming: Part-1
 *Chapter 2: Data Type, Input and Output
 *Example: 2.14.3
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>

int main ()

{
    int n1, n2, sum, sub, mul, bi;
    char s;

    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf ("Enter the second number: ");
    scanf("%d", &n2);

    sum = n1 + n2;
    s = '+';
    sum = n1 %c n2 ;
    printf("The sum  is: %d\n", sum);

    sub = n1 - n2;
    s = '-';
    sub = n1 %c n2;
    printf("The subtraction is: %d\n", sub);

    mul = n1 * n2;
    s = '*';
    mul = n1 %c n2;
    printf("The multiplication is: %d\n", mul);


    bi = n1 / n2;
    s = '/';
    bi = n1 %c n2;
    printf("The Quotient is: %d\n", bi);

    return 0;

}
