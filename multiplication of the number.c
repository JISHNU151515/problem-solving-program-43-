#include<stdio.h>
int main()
{
    int row,col,a[10][10],b[10][10],c[10][10],i,j;
    printf("to do the multiplication of the sum");
    scanf("%d %d",&row,&col);
    for(i=0;i<=row;i++)
    {
        for(j=0;j<=col;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0;i<=row;i++)
    {
        for(j=0;j<=col;j++)
        {
            scanf("%d",&b[i][j]);
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    for(i=0;i<=row;i++)
    {
        for(j=0;j<=col;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
