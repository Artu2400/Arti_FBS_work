#include<stdio.h>
void main()
{
	int age;
	printf("enter your age");
	scanf("%d",&age);
	if(age<0)
	{
		printf("invalid age");
	}
    else if(age<=12)
    {
    	printf("it is child");
	}
	else if(age>=13&& age<=19)
	{
		printf("it is teenager");
	}
	else if(age>=20 && age<=59)
	{
		printf("it is Adult ");
	}
	else if(age=60)
	{
		printf("it is senior");
	}
}