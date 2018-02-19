/***********************************
 *Computer Programming: Part-1
 *Chapter 9: String
 *Excercise after 9.7 (Compare two String)
 *Author: Md Akil Mahmod Tipu
 *contact: www.akiltipu.com
 
 ***********************************/

#include <stdio.h>
#include <string.h>

//call a function to compare a string
 
int string_compare(char a[], char b[])
{
    for(int i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if (a[i] < b[i])
        {
            return -1;        
        }
        if (a[i] > b[i])
        {
            return 1;        
        }
    
    }
    
    if (strlen(a) == strlen(b))
    {
        return 0;
    }
    
    if (strlen(a) < strlen(b))
    {
        return -1;
    }
    
    if (strlen(a) > strlen(b))
    {
        return 1;
    }


}

int main()
{
    char arr1 [] = "Bangladesh";
    char arr2 [] = "India";
    int compare = string_compare(arr1,arr2);
    
    //printf("%d\n", compare);
    
    if (compare == 0)
    {
        printf("arr1 and arr2 are equal\n");
    }
    else if (compare == 1)
    {
        printf("arr1 is greater than arr2\n");
    }
    else if (compare == -1)
    {
        printf("arr1 is less than arr2\n");
    }
    
    
    return 0;
}
