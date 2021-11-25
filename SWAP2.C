/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("swaping of two numbers");
    scanf("%d",&a);
    scanf("%d",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("%d %d",a,b);
    

    return 0;
}
