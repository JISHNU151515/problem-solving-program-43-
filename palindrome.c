#include<stdio.h>
int main()
{
    int num,temp,rev=0,rem;
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==temp)
    {
        printf("it is an palindrome");
    }
    else
    {
        printf("it is not an palindrome");
    }
    return 0;
}
