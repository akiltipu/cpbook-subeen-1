/***********************************
 *Computer Programming: Part-1
 *Chapter 9: String
 *Example: 9.7 (Concatenate String basic)
 *Author: Md Akil Mahmod Tipu
 *contact: www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

int main ()
{
    char str1[] = "Bangla", str2[] = "desh", str3[12];
    
    int i, j, length1 = 6, length2 = 4;
    
    for(i = 0, j = 0; i < length1; i++, j++)
    {
        str3[j] = str1[i];
    }
    //printf("The value of j is %d\n", j);
    
    for(i = 0; i <length2; i++, j++)
    {
        str3[j] = str2[i];

    }
    
    str3[j] = '\0';
    
    printf("%s\n", str3);

    return 0;

}
