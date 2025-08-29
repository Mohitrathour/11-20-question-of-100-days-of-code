#include<stdio.h>
int main()
{
    int year;
    printf("enter the year to check");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || (year%400==0))
    {
        printf("its a leap year");
    }
    else
    {
        printf("its a not leap year");
    }    
    
    return 0;
}