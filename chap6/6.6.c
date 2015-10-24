/***********************************
 *Computer Programming: Part-1
 *Chapter 6: Array
 *Example: 6.6
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>

int main()
{
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;

    for (i = 0, j = 9; i < 10; i++, j--){
        temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
    }
    for(i = 9; i >= 0; i--){
        printf("%d\n", ara[i]);
    }

    return 0;
}
