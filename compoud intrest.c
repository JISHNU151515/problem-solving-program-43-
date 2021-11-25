/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()

{
    float p,t,r,si,ci,a;
    printf("to find the simple intrest and compound");
    scanf("%f",&p);
    scanf("%f %f ",&t,&r);
    si=(p*t*r)/100;
    a=p*(pow((1+r/100),t));
    ci=a-p;
    printf("%f %f %f",si,a,ci);
    printf("\n");
    
    

    



    return 0;
}
