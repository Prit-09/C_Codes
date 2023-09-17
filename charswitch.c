#include<stdio.h>
void main()
{
	char ch;
	printf("enter your choice:");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'R':
			printf("Red");
			    break;
		case 'G':
		    printf("Green");
		        break;
		case 'P':
		    printf("Pink");
		        break;
		default:
		    printf("invalid choice");
		        break;	
	}
}
