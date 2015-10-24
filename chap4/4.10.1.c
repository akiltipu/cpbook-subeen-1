/***********************************
 *Computer Programming: Part-1
 *Chapter 4: LOOP
 *Example: 4.10.1
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>
int main ()
{
    int m, n, i;

    m = 0;

    for (n = 1; n <= 20; n++){

        for (i = 1; i <= 10; i++){
            for ( ; m <= 20; m = m +n){


            }
  printf("%d * %d = %d\n", n, i, m);
        }
    }

    return 0;
}

