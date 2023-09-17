#include<stdio.h>
void main()
{
	int n,i,f;
	i=f=1;
	printf("enter a number to find factorial:");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("the factorial of num is :%d",f);
}
