//pointer arithmatic

#include<stdio.h>
void main()
{
	int a[5]={10,20,30,40,50};
	int *p[5],i;
	for(i=0;i<5;i++)
	{
		p[i]=&a[i];
		printf("elements of the array are:");
		
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",*p[i]);
	}
}
