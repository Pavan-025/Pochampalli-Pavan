#include<stdio.h>

int main()

{
  int num1,num2,num3;
  printf("Enter a number:");
  scanf("%d",&num1);
  scanf("%d",&num2);
  scanf("%d",&num3);
  if(num1>num2){
  	printf("num1 is greater");	
}
	else if(num2>num1){
  	printf("num2 is greater");
  }

  else {
  	printf("num3 is greater than num1 and num2");	
  }
		
}
