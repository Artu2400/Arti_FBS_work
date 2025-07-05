#include<stdio.h>
void main()
{
	int no;
	printf("enter any number");
	scanf("%d",&no);
	
	if(no>0)
	{
		printf("number is positive");
	}
	else if(no<0)
	{
		printf("number is negative");
	}
	else 
	{
		printf("number is neutral");
	}
	
}