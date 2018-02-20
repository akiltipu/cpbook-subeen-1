/***********************************
 *Computer Programming: Part-1
 *Chapter 2: Data Type, Input and Output
 *Example: 2.14
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>

int main ()

{
    int num1, num2;
    
    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1+num2);

    printf("%d - %d = %d\n", num1, num2, num1-num2);

    printf("%d * %d = %d\n", num1, num2, num1*num2);

    printf("%d / %d = %d\n", num1, num2, num1/num2);



    return 0;
}
