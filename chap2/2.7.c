/***********************************
 *Computer Programming: Part-1
 *Chapter 2: Data Type, Input and Output
 *Example: 2.7
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com

 ***********************************/
#include <stdint.h>

int main()
{
    int n;
    double x;

    x = 10.50;
    n = (int) x;

    printf("Value of n is %d\n", n);
    printf("Value of x is %lf\n", x);

    return 0;
}
