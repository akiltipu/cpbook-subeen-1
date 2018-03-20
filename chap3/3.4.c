/***********************************
 *Computer Programming: Part-1
 *Chapter 3: Conditional Logic
 *Example: 3.4
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

int main ()
{
    int n = 0;

    if (n < 0)
    {
        printf ("The number is negative \n");
    }
    else if (n > 0) 
    {
        printf("The number is positive \n");
    }
    else
    {
        printf("The number is zero!\n");
    }
    return 0;
}
