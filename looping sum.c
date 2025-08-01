#include<stdio.h>

main()
{
int n;
printf("Enter the number: ");
scanf("%d",&n);
int i;
int sum=0;
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("The Sum is %d",sum);
}
