
/***********************************
 *Computer Programming: Part-1
 *Chapter 8: Binary Search
 *Example: 8.00
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
 #include <stdio.h>

int main()
{

    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    low_index = 0;
    high_index = 15;
    mid_index;
    num = 97;

    while(1)
    {
        mid_index = (low_index + high_index) / 2;
        
        if(num == ara [mid_index])
        {
            break;
        }
        if(num < ara[mid_index])
        {
            high_index = mid_index - 1;

        }
        else 
        {
            low_index = mid_index +1;
        }
        
    }
}
