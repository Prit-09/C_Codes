#include<stdio.h>
void main()
{
	  int a,b,add,sub,mul,div,i;
	  printf("enter your choice:");
	  scanf("%d",&i);
	  printf("values of a and b");
	  scanf("%d%d",&a,&b);
	  switch(i)
	  {
	  	case 1:
	  		add=a+b;
	  		   printf("addition of a and b is:%d",add);
	  		        break;
	  	case 2:
	  		sub=a-b;
	  		    printf("substraction of a and b is:%d",sub);
	  		        break;	
		case 3:
	  		mul=a*b;
	  		    printf("multiplication of a and b is:%d",mul);
	  		        break;		
		case 4:
	  		div=a%b;
	  		    printf("division of a and b is:%d",div);
	  		        break;	
		default:
		    printf("opration is not in these choices");
		        break;		  	        
	  }
}
