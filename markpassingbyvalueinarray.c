#include<stdio.h>
int displaymarks(int[],int);
void main()
{
	int marks[5]={23,45,34,56,76};
	displaymarks(marks,5);
}
int displaymarks(int tempmarks[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",tempmarks[i]);
	}
}
