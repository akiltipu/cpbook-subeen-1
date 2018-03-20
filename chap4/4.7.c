/***********************************
 *Computer Programming: Part-1
 *Chapter 4: LOOP
 *Example: 4.7
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

  int main()

{
    int n = 5;
    int i;

    for (i = 1; i <= 10; i = i + 1)
    {

        printf("%d * %d =  %d\n", n, i, n*i);
    }

    return 0;
}
