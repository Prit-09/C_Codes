#include<stdio.h>
void main()
{
	int multiply[5];
	int i;
	//accepting arrai elements
	for(i=0;i<5;i++)
	{
		printf("enter the elements in the array\n");
		scanf("%d",&multiply[i]);
	}
	//logic for multiplication
	for(i=0;i<5;i++)
	{
		multiply[i]=multiply[i]*3;
		
	}
	printf("after multiplying each elements by 3 the array is: \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",multiply[i]);
	}
	printf("\n");
}
