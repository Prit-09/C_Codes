//program for function with argument/passing some values/parametrs

#include<stdio.h>
void add(int a,int b);
void main()
{
	int a=1,b=3;       
	add(a,b);          //actual parameter
}
void add(int a,int b)    //formal parameter
{
	int add;
	add=a+b;
	printf("addition=%d",add);
}


