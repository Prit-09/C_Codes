#include<stdio.h>
void even();
void main()
{
	even();
}
void even()
{
	int n;
	printf("even number from 1 to 20 are:\n");
	for(n=1;n<=20;n++)
	{
		if(n%2==0)
		{
			printf("%d\n",n);
		}
	}
}
