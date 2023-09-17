#include<stdio.h>
void factorial();
void main()
{
	factorial();
}
void factorial()
{
	int n,i=1,fact=1;                   //n =input number
	printf("enter the number:");       //i=counter number
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	} 
	printf("factorial of number is:%d",fact);                        
}
