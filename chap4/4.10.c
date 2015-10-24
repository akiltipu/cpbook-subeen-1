/***********************************
 *Computer Programming: Part-1
 *Chapter 4: LOOP
 *Example: 4.10
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>
int main ()
{
    int n, i;

    for (n = 1; n <= 20; n++){
        for (i = 1; i <= 10; i++){
            printf("%d * %d = %d\n", n, i, n*i);
        }
    }

    return 0;
}
