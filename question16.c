#include<stdio.h>
int main()
{
    int a,b,c;
    int temp=0;
    printf("enter first no\n");
    scanf("%d",&a);
    printf("enter second no\n");
    scanf("%d",&b);
    printf("enter third no\n");
    scanf("%d",&c);
    if(a >= b && a>=c)
    {
        printf("largest no is:%d",a);
    }
    else if ( b>=c && b>=a)
    {
        printf("largest no is:%d",b);
    }
    else{printf("largest no is%d",c);}
    return 0;
}