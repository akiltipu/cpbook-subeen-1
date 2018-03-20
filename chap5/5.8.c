/***********************************
 *Computer Programming: Part-1
 *Chapter 5: Basic Math
 *Example: 5.8
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

int main ()

{
    int a, b, x, gcd;
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        x = a;
    }
    else 
    {
        x = b;
    }

    for ( ; x >= 1; x--)
    {
        if ( a % x == 0  &&  b % x == 0)
        {
            gcd = x;
            break;
        }
    }

    printf("GCD is %d\n", gcd);

    return 0;
}
