#include<stdio.h>
void main()
{
	int i,j,n,c=1;
	printf("enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;++j)
		{
			printf("%d",c);
			++c;
		}
		printf("\n");
	}
	
}
