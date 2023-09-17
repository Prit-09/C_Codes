#include<stdio.h>
void main()
{
	int marks[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("enter the elements in the array");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("\n array elements are:\n");
		printf("%d\t",marks[i]);
	}
}
 

