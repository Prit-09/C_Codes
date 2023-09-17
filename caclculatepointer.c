#include<stdio.h>
void calculate(int,int *,int *);  
void main()
{
	int num=2,square,cube;
	calculate(num,&square,&cube);
	printf("square of 2 is = %d\ncube of 2 is = %d\n",square,cube);
}
void calculate(int num,int *square,int *cube)
{
	*square=num*num;
	*cube=num*num*num;
}


