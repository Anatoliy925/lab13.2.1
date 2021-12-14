#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "Var.hpp"

#define z 6
#define MAX(a,b) ((a)>(b))?(a):(b)
#define MIN(a,b) ((a)<(b))?(a):(b)
#define SQR(x) ((x)*(x))
#define CUBE(x) ((x)*(x)*(x))
#define ABS(x) ((x<0)?(-x):(x))
#define PRINTI(w) printf(#w"=%d\n", w)
#define PRINTR(w) printf(#w"=%d\n", w)


using namespace nsVar;

int main()
{
    int max = 0;
    int min = 0;
    do
    {
        puts("Defining maximum of two numbers");
        puts("Input 2 integers");
        scanf("%d", &x);
        PRINTI(x);
        scanf("%d", &y);
        PRINTI(y);
        PRINTI(z);
        
        #if (z>1 && z<3)
        
        sum_of_abs = ABS(x) + ABS(y) + ABS(z);
        PRINTI(sum_of_abs);
        x_cube = CUBE(x);
        PRINTI(x_cube);
        max = MAX(sum_of_abs, x_cube);
        PRINTR(max);
        
        #elif (z>3)
        {
            
            two_x_plus_y = 2*x + y;
            PRINTI(two_x_plus_y);
            two_y_minus_z_sq = SQR(2*y - z);
            PRINTI(two_y_minus_z_sq);
            min = MIN(two_x_plus_y, two_y_minus_z_sq);
            PRINTR(min);
            
        }
        #endif
        puts("Repeat? y/n ");
        ch = getchar();
    } while (ch == 'y');
}
