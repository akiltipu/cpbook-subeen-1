/***********************************
 *Computer Programming: Part-1
 *Chapter 3: Conditional Logic
 *Example: 3.8
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>

int main()
{
    int number, remainder;

    number = 4;

    remainder = number % 2;

    if (remainder == 0){
        printf("The number is even\n");
    }
    else {
        printf("The number is odd\n");
    }

    return 0;
}
