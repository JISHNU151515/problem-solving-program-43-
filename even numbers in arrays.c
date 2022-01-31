#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10], i;
    printf("Enter any 10 array elements: ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    printf("\nAll Even Array elements are:\n");
    
    for(i=0; i<10; i+=2)
    {
        
       
            printf("%d ", arr[i]);
            printf("\n");
    }
    getch();
    return 0;
}
