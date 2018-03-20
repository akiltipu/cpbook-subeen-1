/***********************************
 *Computer Programming: Part-1
 *Chapter 5: Basic Math
 *Example: 5.6.1
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

int main()

{
    int i, n, sum;

    scanf("%d", &n);

    for(i = 1, sum = 0; i <= n; i++)
    {

        if ( i % 2 == 0)
        {
            continue;

        }
        
        sum = sum + i;
    }
    
    printf("Summation is: %d\n", sum);

    return 0;
}
