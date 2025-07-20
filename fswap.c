#include<stdio.h>
void main()
{
	int a=10,b=20;
	swap(&a,&b);
	printf("a,b");
}
void swap (int *x,int *y)
{
	printf("\n address of x=%u address of y=%u",x,y);
	int temp=*x;
	*x=*y;
	*y=temp;
	printf("\n address of x=%u address of y=%u",x,y);
}