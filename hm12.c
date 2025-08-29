#include<stdio.h>
void main()
{
int n,sum=0;
printf("enter a number:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{

    sum+=i;
}
printf("%d sum of all natural num\n",sum);
}
