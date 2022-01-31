#include <stdio.h>
int main()
{
    float marks[5]={30,40,50,60,70},tot;
    printf("to find the average of the marks");
    tot=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    marks[5]=tot/500*100;
    printf("%f %f",tot,marks[5]);
    return 0;
    
}
