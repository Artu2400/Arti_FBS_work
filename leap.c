#include<stdio.h>
void main()
{
	int year=2002;
	printf("enter any year");
	scanf("%d",&year);
	if(year%4==0 && year%100 !=0 || year%400==0)
	{
		printf("this is leap year");
	}
	else
	{
		printf("this is not a leap year");
	}
}