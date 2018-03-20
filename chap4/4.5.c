/***********************************
 *Computer Programming: Part-1
 *Chapter 4: LOOP
 *Example: 4.5
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

int main ()

{
    int n = 0;

    while (n < 10)
    {
        n = n + 1;
        if (n % 2 == 0)
        {
            continue;
        }
        
        printf("%d\n", n);
    }

    return 0;
}
