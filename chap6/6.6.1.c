/***********************************
 *Computer Programming: Part-1
 *Chapter 6: Array
 *Example: 6.6.1. Reverse array
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

int main()
{
    int ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   
    int i, j, temp;
    
    for(i = 0, j = 9; i < 10; i++, j--)
    {
        temp = ara[i];
        ara[i] = ara[j];
        ara[j] = temp;
        
        if(i > j)
        {
            break;
        }
    }
    
    for(i = 0; i <10; i++)
    {
        printf("%d\n", ara[i]);
    }
    
    return 0;
}
