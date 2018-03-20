/***********************************
 *Computer Programming: Part-1
 *Chapter 7: Function
 *Example: 7.6.1
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

double pi = 3.14;

void my_fnc()
{
    pi = 3.1416;
    return;
}

int main()
{
    printf("%lf\n", pi);
    my_fnc();
    printf("%lf\n", pi);

    return 0;
}
