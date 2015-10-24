/***********************************
 *Computer Programming: Part-1
 *Chapter 4: LOOP
 *Example: 4.14
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>

int main()
{
    int a, b, c;
    for (a = 1; a <= 3; a++){
        for (b = 1; b <= 3; b++){
            for(c = 1; c <=3; c++){
                if(b != a && c != b && c != a){
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
