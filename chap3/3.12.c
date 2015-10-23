/***********************************
 *Computer Programming: Part-1
 *Chapter 3: Conditional Logic
 *Example: 3.12
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>
int main()
{
    char ch = 'i' ;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("%c is vowel\n", ch);
    }

    else {
        printf("%c is consonant\n", ch);
    }

    return 0;
}
