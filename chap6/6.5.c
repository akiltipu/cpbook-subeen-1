/***********************************
 *Computer Programming: Part-1
 *Chapter 6: Array
 *Example: 6.5
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>

int main()
{
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int ara2[10];
    int i, j;

    for (i = 0, j = 9; i < 10; i++, j--){
        ara2[j] = ara[i];

    }
    for(i = 0; i < 10; i++){
        ara[i] = ara2[i];
    }
    for (i = 0; i < 10; i++){
        printf("%d\n", ara[i]);
    }

    return 0;
}
