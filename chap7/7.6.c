/***********************************
 *Computer Programming: Part-1
 *Chapter 7: Function
 *Example: 7.6
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>

int test_function(int x)
{
    int y = x;

    x = 2 * y;
    return (x * y);
}
int main()
{
    int x = 10, y = 20, z = 30;
    z = test_function(x);
    printf("%d  %d  %d\n", x, y , z);

    return 0;
}
