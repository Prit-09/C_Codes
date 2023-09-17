#include<stdio.h>
void main()
{
	int n,i,flag=0;                      
	printf("enter the number:");          
	scanf("%d",&n);                       
	if(n==0||n==1)                      
	{                                    
		flag=1;                           
	}
	for(i=2;i<=n/2;i++)                   
	{                                                            
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)                            
	{
		printf("%d is a prime number",n);
		
	}
	else
	{
		printf("%d is not a prime number",n);
	}
}

/*firstly flag==0
   then we take value for n=3
   then we check the codition which is true or false
   if(n==3||n==1)which is false condition
   therefore its not going in bracket
   then we check loop for(i=2;2<=3/2;i++) which is also false
                         (i=2;2<=1;i++)
	therefore it goes directly on these statement
*/
