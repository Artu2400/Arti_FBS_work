#include<stdio.h>
int isleap();
void main()
{
	if(isleap())
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
}
int isleap()
{
	int year=2002;
	printf("enter any year");
	scanf("%d",&year);
	if(year%4==0 && year%100 !=0 || year%400==0)
	{
	return 1;
	}
	else
	{
	return 0;
	}
}