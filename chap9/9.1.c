/***********************************
 *Computer Programming: Part-1
 *Chapter 9: String
 *Example: 9.1
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>

int main ()
{
    char country [] = { 'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', ' \0', 'i', 's', ' ', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y', '\0'  };

    printf("%s\n", country);

    return 0;
}
