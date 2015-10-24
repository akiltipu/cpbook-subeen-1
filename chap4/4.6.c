/***********************************
 *Computer Programming: Part-1
 *Chapter 4: LOOP
 *Example: 4.6
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>

int main ()

{
    int n = 5;
    int i = 1;
    while (i <= 10){
        printf("%d * %d = %d\n", n, i, n*i);
        i++;
    }

    return 0;
}
