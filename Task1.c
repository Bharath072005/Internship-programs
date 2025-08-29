#include<stdio.h>
void main()
{
    float a,b;
    char operator;
    printf("enter the operator (+,-,*,/):\n");
    scanf("%c",&operator);
    printf("enter the values of operands(a,b):\n");
    scanf("%f%f",&a,&b);
    switch(operator)
    {
        case'+':
        printf("%f+%f=%f",a,b,a+b);
        break;
        case'-':
        printf("%f-%f=%f",a,b,a-b);
        break;
        case'*':
        printf("%f*%f=%f",a,b,a*b);
        break;
        case'/':
        printf("%f/%f=%f",a,b,a/b);
        break;
        default:
        printf("..error..\n enter correct operator ");
    }
}
