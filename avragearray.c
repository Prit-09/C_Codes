/*write a program to accept n number and
 find the sum of all elements and find the average*/
#include<stdio.h>
void main()
{
	int a[10],n,i,sum=0,avg;
	printf("enter the number of array elements:");
	scanf("%d",&n);
	printf("enter the %d elements",n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("sum of elements=%d\n",sum);
	printf("average of elements=%d",avg);
}
