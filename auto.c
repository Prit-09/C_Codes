#include<stdio.h>
void fun1();
void fun2();
void main()
{
   int i=10;
   printf("%d\n",i);
   fun1();
   fun2();	
} 
void fun1()
{
	int i=20;
	printf("%d\n",i);
} 
void fun2()
{
	int i=30;
	printf("%d\n",i);
}     
