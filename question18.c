#include<stdio.h>
int main()
{
    int percentage;
    printf("enter the percentage to know the grade\n");
    scanf("%d",&percentage);
    if(percentage>=90 && percentage<=100)
    {
        printf("grade A\n");
    }
    else if(percentage>=80 && percentage<90)
    {
        printf("grade B\n");
    }
    else if(percentage>=70 && percentage<80)
    {
        printf("grade C\n");
    }
    else if(percentage>=60 && percentage<70)
    {
        printf("grade D\n");
    }
    else
    {
        printf("grade F\n");
    }
    return 0;
}