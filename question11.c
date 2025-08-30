//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main()
{
    int a;
    printf("enter the no\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the no is even");
    }
    else 
    {
        printf("the no is odd");
    }
    return 0;
}