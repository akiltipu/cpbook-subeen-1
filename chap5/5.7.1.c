/***********************************
 *Computer Programming: Part-1
 *Chapter 5: Basic Math
 *Example: 5.7.1
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

int main()

{
    double farenheit, celsius;

    printf("Enter the temperature in Farenheit: ");
    scanf("%lf", &farenheit);

    celsius = (farenheit - 32) / 1.8;

    printf("The temperature in Celsius is: %lf\n", celsius);

    return 0;
}
