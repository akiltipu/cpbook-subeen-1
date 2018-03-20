/***********************************
 *Computer Programming: Part-1
 *Chapter 6: Array
 *Example: 6.1
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

int main()

{
    double ft_marks, st_marks, final_marks;
    double total_marks;

    ft_marks = 80;
    st_marks = 74;
    final_marks = 97;

    total_marks = ft_marks / 4 + st_marks / 4 + final_marks / 2;

    printf("Annual marks is %0.0lf\n", total_marks);


    return 0;
}
