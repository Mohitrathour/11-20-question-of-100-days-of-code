//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main()
{
    char character;
    printf("enter the character to check");
    scanf("%c",&character);
    if(character=='A' || character=='E' || character=='I' || character=='O' || character=='U' || character=='a' || character=='e' || character=='i' || character=='o' || character=='u')
    {
        printf("its a vowel");
    }
    else
    {
        printf("its a consonant");
    }    
    
    return 0;
}