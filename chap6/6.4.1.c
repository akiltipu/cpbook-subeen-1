/***********************************
 *Computer Programming: Part-1
 *Chapter 6: Array
 *Example: 6.4.1
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>

int main ()

{
    int ara[10] = { 10, 20, 30, 40, 50, 60, 70, 80 ,90, 100};

    int i;

    for ( i = 9; i >= 0; i--){
        printf(" %d th element is:  %d\n", i+1, ara[i]);

    }

    return 0;
}

