/***********************************
 *Computer Programming: Part-1
 *Chapter 2: Data Type, Input and Output
 *Example: 2.13
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com

 ***********************************/
#include <stdio.h>

int main()

{
    char ch;
    printf("Enter the first letter of your name: ");

    ch = getchar();

    printf("The first letter of your name is: %c\n", ch);


    return 0;
}
