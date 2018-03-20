/***********************************
 *Computer Programming: Part-1
 *Chapter 4: LOOP
 *Example: 4.8
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

int main()
{
    int n = 5;
    int i = 1;

    for ( ; ;)
    {
        printf ("%d * %d = %d\n", n, i, n*i);
        i++;
        
        if (i > 10)
        {
            break;
        }
    }

    return 0;
}
