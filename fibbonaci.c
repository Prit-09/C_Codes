#include<stdio.h>
void main()
{
	int n,i,first=0,second=1,next;
	printf("enter the last position");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		next=first+second;
		printf("%d\t",next);
		first=second;
		second=next;
	}
}
