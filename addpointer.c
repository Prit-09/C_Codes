#include<stdio.h>
void main()
{
	int a=10,b=5;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	printf("%d is at %u\n %d is at %u\n",*p1,p1,*p2,p2);
	printf("(*p1)+(*p2)=%d\n",(*p1)+(*p2));
	printf("(*p1)-(*p2)=%d\n",(*p1)-(*p2));
}
