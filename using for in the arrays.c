#include <stdio.h>
int main()
{
    int marks[5],i,tot;
    float avg;
    printf("to print the marks using for loop");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&marks[i]);
    }
    tot=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    avg=tot/5;
    printf("\n%d",tot);
    printf("\n%f",avg);
    return 0;
    
}
