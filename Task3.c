#include<stdio.h>
int main()
{
    int i,n,sum=0,marks;
    float avg;
    printf("enter the number of subjects \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter marks of subject %d \n",i);
        scanf("%d",&marks);
        sum = sum + marks;
    }
    avg = sum / n;
    printf("your avarage marks is %f\n",avg);
    if(avg == 100)
    printf("your grade is A+");
    else
    if(avg >= 90)
    printf("your grade is A");
    else
    if(avg >= 80)
    printf("your grade is B+");
    else
    if(avg >= 70)
    printf("your grade is B");
    else
    if(avg >= 60)
    printf("your grade is C");
    else
    if(avg >=35)
    printf("your grade is D");
    else
    printf("your grade is E");
}

