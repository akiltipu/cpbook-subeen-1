/***********************************
 *Computer Programming: Part-1
 *Chapter 7: Function
 *Example: 7.5
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

double add(double x, double y);

int main()
{
    double a = 2.8, b = 2.7, c;

    c = add(a,b);
    printf("%lf\n", c);

    return 0;
}

double add(double n1, double n2)
{
    double sum = n1 + n2;
    return sum;
}
