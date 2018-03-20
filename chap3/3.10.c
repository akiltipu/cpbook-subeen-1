/***********************************
 *Computer Programming: Part-1
 *Chapter 3: Conditional Logic
 *Example: 3.10
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>
int main()

{
    char ch = 'k';

    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lower case\n", ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case\n", ch);
    }
    
    return 0;
}
