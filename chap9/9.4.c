/***********************************
 *Computer Programming: Part-1
 *Chapter 9: String
 *Example: 9.4
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>

int main()

{
    char country [] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0' };

    int i, length;

    printf(" %s\n",  country);

    length = 10;
    for( i = 0; i < length; i++ ){
        if(country[i] >= 97 &&  country[i] <= 122){
            country[i] = 'A' + (country[i] - 'a');
        }
    }
    printf(" %s\n", country);

    return 0;
}
