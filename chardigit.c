#include<stdio.h>
void main()
{
	char ch;
	printf("enter the character:");
	ch=getchar();
	if(ch>=48&&ch<=57)
	{
		printf("\n it is a digit");
	}
	else
	{
		printf("\n it is some other character");
	}
}
