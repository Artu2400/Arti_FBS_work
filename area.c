#include<stdio.h>
void main()
{
	float radius,area;
	float pi=3.14;
	
	printf("enter the radius of the circle");
	scanf("%f",&radius);
	
	area=pi*radius*radius;
	
	printf("area of the circle=%.2f\n",area);
}