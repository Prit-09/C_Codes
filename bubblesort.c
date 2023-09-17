#include<stdio.h>
void main()
{
	int a[5]={11,4,12,7,6},i,j,temp,n=5;
	printf("using before sorting array elements are:\n",a[5]);
	for(i=0;i<n;i++)
	{
		printf("%d\t\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("after the sorting elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
 } 
