 #include<stdio.h>
void main()
{
	int n,i,multi;
	printf("enter the number \n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
    {
    	multi=n+i;
    	printf("%d*%d=%d\n",n,i,multi);
	}
}
