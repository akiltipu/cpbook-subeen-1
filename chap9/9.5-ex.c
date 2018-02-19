/***********************************
 *Computer Programming: Part-1
 *Chapter 9: String
 *Excercise: After 9.5 (Find a string length)
 *Author: Md Akil Mahmod Tipu
 *contact: www.akiltipu.com
 
 ***********************************/

#include <stdio.h>

//call a function to find string length using while loop

int string_length(char str[])
{
    int i = 0;
    
    while (str[i] != '\0')
    {
        i++;
    }
    
    return i;
   
}

/*
//call a function with for loop to make string length. 

int string_length(char str[])
{
    int i, length = 0;
    
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;   
    }
    return length;
}


//Another way to call this function using for loop

int string_length(char str[])
{
    int i;
    
    for (i = 0; str[i] != '\0'; i++);
    
    return i;
   
}
*/

int main()
{
    char country[100];
    
    int length;
    
    while (1 == scanf("%s", country))
    {
        length = string_length(country); 
        
        printf("length: %d\n", length);       
    
    }

    return 0;
}
