//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
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