 #include<stdio.h>
 void main()
 {
 	int i=1,ch;
 	int a=20,b=10,add,sub,mul,div;
 	do
	{
	 	printf("1.additon\n 2.subtraction\n 3.multiplication\n 4.division\n");
	 	printf("enter your choice\n");
	 	scanf("%d",&ch);
	 	switch(ch)
	 	{
	 		case1:
	 			add=a+b;
	 			printf("addition of a and b is:%d",add);
	 			break;
	 		case2:
	 			sub=a-b;
	 			printf("substraction of a and b is:%d",sub);
	 			break;
			case3:
	 			mul=a*b;
	 			printf("multiplication of a and b is:%d",mul);
	 			break;
			case4:
	 			div=a%b;
	 			printf("division of a and b is:%d",div);
	 			break;
			default:
			printf("you entered wrong choice");
			break;
				 	 	
		 }
		 i++;
	}	 while(i<=3);
 }
 
