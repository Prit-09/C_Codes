#include<stdio.h>
void main()
{
	int n,i,j;
	printf("enter the number of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}
