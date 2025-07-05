#include<stdio.h>
void main()
{
	int units;
	printf("enter any number");
	scanf("%d",&units);
	if(units<=50)
	{
		printf("units is 30 rupees");
	}
	else if(units<=150)
	{
		printf("units is 40 rupees");
	}
	else if(units==151)
	{
		printf("units is 50 rupees");
	}
}