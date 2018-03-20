/***********************************
 *Computer Programming: Part-1
 *Chapter 4: LOOP
 *Example: 4.4
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>
int main ()
{
    int n = 1;
    while(n <= 100)
    {
        printf("%d\n", n);
        n++;
        
        if (n > 10)
        {
            break;
        }
    }

    return 0;
}
