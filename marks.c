#include<stdio.h>
void main()
{
	int a;
	printf("enter the marks");
	scanf("%d ",&a);
	if(a>75)
	{
		printf("it is distinction");
	}
	else if(a>65)
	{
		printf("it is first class");
	}
	else if(a>55)
	{
		printf("it is second class");
	}
	else if(a>=40)
	{
		printf("it is pass class");
	}
	else if(a<40)
	{
		printf("it is fail");
	}
}