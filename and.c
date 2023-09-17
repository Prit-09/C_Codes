#include<stdio.h>
void main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if( num>=1&&num<=100)
	{
		printf("number is within the given range");
	}
	else
	{
		printf("number is not within the given range");  
	}
}
