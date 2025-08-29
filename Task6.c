#include<stdio.h>
void main()
{
int i,j,t,a[5],n;
printf("Enter the range of array:");
scanf("%d",&n);
printf("Enter elements into array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
printf("The Sorted Order is : ");
for(i=0;i<n;i++)
printf("\t%d",a[i]);
}
