#include<stdio.h>
void even();
void main()
{
	even();
}
void even()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
		if(n%2==0)
		{
			printf("number is even",n);
		}
		else
		{
			printf("number id odd",n);
		}

}

