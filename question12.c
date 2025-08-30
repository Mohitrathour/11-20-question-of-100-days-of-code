//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main()
{
    int a;
    printf("enter the no\n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("the no is positive\n");
    }
    else if(a<0)
    {
        printf("the no is negative\n");
    }
    else
    {
        printf("the no is zero\n");
    }
    return 0;
}    