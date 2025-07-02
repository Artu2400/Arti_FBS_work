#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter any three digit");
	scanf("%d%d%d",&a ,&b ,&c);
	
	if(a>b&&b>c)
	{
		printf("a is greater");
	}
	else if(b>c)
	{
		printf ("b is greater");
	}
	else if(c>a)
	{
		printf("c is greater");
	}
}

