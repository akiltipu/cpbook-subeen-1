/***********************************
 *Computer Programming: Part-1
 *Chapter 7: Function
 *Example: 7.8
 *Author: Md Akil Mahmod Tipu
 *www.akiltipu.com
 ***********************************/
#include <stdio.h>

void test_function(int ara[])
{
    ara[0] = 100;
    return;
}

int main()
{
    int ara[] = {1, 2, 3, 4, 5};
    printf("%d\n", ara[0]);
    test_function(ara);
    printf("%d\n", ara[0]);

    return 0;
}
