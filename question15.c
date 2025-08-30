//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main()
{
    char a;
    printf("enter a character\n");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
    {
        printf("upper case alphabet\n");
    }
    else if(a>='a' && a<='z')
    {
        printf("lower case alphabet");
    }
    else if(a>='0' && a<='9')
    {
        printf("digit\n");
    }
    else{ printf("special character\n");}
    return 0;
}