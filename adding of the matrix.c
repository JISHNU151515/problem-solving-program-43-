#include<stdio.h>
int main()
{
    int row,col,i,j,arr[10][10],x[10][10],y[10][10];
    printf("to print the adding of the matrix");
    scanf("%d %d",&row,&col);
    for(i=0;i<=row;i++)
    {
        for(j=0;j<=col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<=row;i++)
    {
        for(j=0;j<=col;j++)
        {
            scanf("%d",&x[i][j]);
            y[i][j]=arr[i][j]+x[i][j];
        }
    }
    for(i=0;i<=row;i++)
    {
        for(j=0;j<=col;j++)
        {
            printf("%d",y[i][j]);
        }
        printf("\n");
    }
    return 0;
}
