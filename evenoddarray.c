/*write a program to accept n number from user and store it in array and 
find out the number of even and odd numbers.*/
#include<stdio.h>
void main()
{
	int a[20],n,i,count1=0,count2=0;
	printf("enter the number of elements :\n");
	scanf("%d",&n);
	printf("enter %d elements in array\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			count1++;
		}
		else
		{
			count2++;
		}
	}
	printf("count of even=%d and odd numbers=%d",count1,count2);
	
}
