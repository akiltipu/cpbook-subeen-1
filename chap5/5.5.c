/***********************************
 *Computer Programming: Part-1
 *Chapter 5: Basic Math
 *Example: 5.5
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>

int main ()

{
    int n, sum;

    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;
    printf(" Summation is %d\n", sum);

    return 0;
}
