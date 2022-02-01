//Transpose of a matrix
#include <stdio.h>
int main()
{
    int row,col,i,j,arr1[10][10],arr2[10][10];
    printf ("Enter the size of matrix : "); 
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++)
    {
        printf("Enter row %d (%d elements) : ",i+1,col);
        for (j=0;j<col;j++)
        {
            scanf("%d",&arr1[i][j]); 
        }
    }
    
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            arr2[j][i]=arr1[i][j];
        }
    }
    printf("\nThe transpose matrix is : \n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
}
