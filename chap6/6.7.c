/***********************************
 *Computer Programming: Part-1
 *Chapter 6: Array
 *Example: 6.7
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

int main()
{
    int ft_marks[40] = { 83, 86, 97, 95, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 58, 69, 67, 53, 56, 71, 62},
        st_marks[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62, 49},
            final_marks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55, 69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64, 55, 69, 85, 81, 80, 88, 71};
            
    int i, marks, count;
    double total_marks[40];
    
    for (i = 0; i <= 40; i++)
    {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }
    
    for(i = 1; i <= 40; i++)
    {
        printf("Roll No:  %d\t Total Marks:  %0.0lf\n", i, total_marks[i-1]);
    }

    for(marks = 50; marks <= 100; marks++)
    {
        count = 0;
        
        for (i = 0; i < 40; i++)
        {
            if (total_marks[i] == marks)
            {
                count++;
            }
        }
        printf("Marks: %d   count:  %d\n", marks, count);
    }
    
    return 0;
}
