/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y,z;
    printf("to find the biggest number in the three numbers");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y)
    {
        printf("x is the biggest number");
    }
    else if(y>z)
    {
        printf("y is the largest of three numbers");
    }
    else 
    {
        printf("z is the least number");
    }


    return 0;
}
