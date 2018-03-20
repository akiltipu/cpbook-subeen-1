/***********************************
 *Computer Programming: Part-1
 *Chapter 5: Basic Math
 *Example: 5.7
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>
int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in celsius:  ");
    scanf("%lf", &celsius);

    farenheit = 1.8 * celsius + 32;

    printf("Temperature in farenheit is: %lf\n", farenheit);



    return 0;
}
