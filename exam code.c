#include<stdio.h>

struct tenure
{
	int tenure;
}

struct employee
{
	int code;
	char name[50];
	int day;
	int month;
	int year;
	int tenure d;
	
};
int main()
{
	struct employee  e[5];
	for(int i=0;i<5;i++)
	{
		printf("\nEnter the details of the employ %d",i+1);
		scanf("\nemployee code is :%d",&e[i].code);
		scanf("\nemployee name is :%s",&e[i].name);
		scanf("\nemployee joining date is :%d",&e[i].day);
		scanf("%d",&e[i].month);
		scanf("%d",&e[i].year);
	}
	for(int i=0;i<3;i++)
	{
	   int tenure;
	   int i=0;
	   printf("Enter the tenure of employee %d:",i+1);
	   scanf("%d",e[i].tenure);
	   while(tenure==3){
	   printf("employee name is %s",e[i].name);
	   i++;
	   }
	   
	   
	   printf("\nthe details of the employ %d",i+1);
	   printf("\nemployee code is %d",e[i].code);
	   printf("\nemployee joining date is  %d-%d-%d",e[i].day,e[i].month,e[i].year);
	   	
	}
	
}
