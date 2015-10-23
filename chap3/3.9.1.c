/***********************************
 *Computer Programming: Part-1
 *Chapter 3: Conditional Logic
 *Example: 3.9.1
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>
int main()
{
    char ch = 'W';

    if (ch >= 'a' && ch <= 'z'){
        printf("%c is lower case\n", ch);
    }
    if (ch >= 'A' && ch <= 'Z'){
        printf("%c is upper case\n", ch);
    }
    return 0;
}
