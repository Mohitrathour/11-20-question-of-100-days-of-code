#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,x,y;
    printf("enter the value of cofficient of x^2\n");
    scanf("%d",&a);
    printf("enter the value of cofficient of x\n");
    scanf("%d",&b);
    printf("enter the value of c\n");
    scanf("%d",&c);
    d=(b*b)- 4*a*c;
    x=(-b+sqrt(d))/2*a;
    y=(-b-sqrt(d))/2*a;
    if(d>0)
    {
        printf("roots are real and different: %d,%d\n",x,y);
    }
    else if(d==0)
    {
        printf("roots are real and same: %d\n",x);
    }
    else 
    {
        printf("roots are complex\n");
    }
    return 0; 
}