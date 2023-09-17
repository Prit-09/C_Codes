#include<stdio.h>
void area_circle();
void main()
{
	area_circle();
}
void area_circle()
{
	float area,radius;
	printf("enter the radius of circle:\n");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("area of circle:%f",area);
}
