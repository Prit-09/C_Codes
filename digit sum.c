#include<stdio.h>
void main()
{
	int num,sum,first,last,middle,rem;
	printf("accept the three digit number from the user :");
	scanf("%d",&num);
	first=num/100;
	rem=num%100;
	middle=rem/10;
	last=rem%10;
	
	sum=first+middle+last;
	printf("sum of digit %d",sum);
	
}
