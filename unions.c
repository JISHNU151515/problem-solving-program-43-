#include<stdio.h>
#include<string.h>
union cars
{
    char name[20];
    int year;
};
int main()
{
    union cars c1;
    union cars c2;
    strcpy(c1.name,"benz");
    c1.year=2000;
    printf("%s",c1.name);
    printf("%d",c1.year);
    //the details of the second car details to be copied//
    strcpy(c2.name,"rolles royce");
    c2.year=2021;
    printf("%s",c2.name);
    printf("%d",c2.year);
    return 0;
}
