/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    double base,expo,power;
    printf("to find the power of the number");
    scanf("%lf",&base);
    scanf("%lf",&expo);
    power=pow(base,expo);
    printf("%lf",power);
    return 0;
}
