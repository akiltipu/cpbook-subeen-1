/***********************************
 *Computer Programming: Part-1
 *Chapter 4: LOOP
 *Example: 4.9
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

int main ()
{
    int m, i, n = 5;

    m = 0;

    for (i = 1; i <= 10; i = i +1)
    {
        m = m + n;
        printf("%d * %d = %d\n", n, i, m);

    }

    return 0;

}
