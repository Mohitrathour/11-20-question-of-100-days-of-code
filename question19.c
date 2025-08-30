#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of first side of triangle\n");
    scanf("%d",&a);
    printf("enter the value of second side of triangle\n");
    scanf("%d",&b);
    printf("enter the value of third side of triangle\n");
    scanf("%d",&c);
  if(a+b>c && b+c>a && c+a>b)
  {
    if(a==b && b==c)
    {
        printf("the triangle is equitorial\n");
    }
    else if(a==b || b==c || a==c)
    {
        printf("the triangle is isosceles\n");
    }
    else
    {
        printf("the triangle is scalene\n");
    }
  } else
    {
        printf("the given side do not form a valid triangle\n");
    }
    return 0;
}