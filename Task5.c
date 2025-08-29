#include<stdio.h>
#include<string.h>
void main()
{
    char s1[10],s2[10];
    int c;
    printf("enter the word to check palindrome \n");
    scanf("%c",&s1);
    strrev(s1);
    strcpy(s2,s1);
    c = strcmp(s1,s2);
    if(c == 0)
    {
        printf("palindrome \n");
    }
    else
    {
        printf("not a palindrome \n");
    }
}

