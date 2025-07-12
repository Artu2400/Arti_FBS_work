#include<stdio.h>
int evenodd(int);
void main()
{
	
	int no=10;
	printf("enter any number");
	scanf("%d",&no);
    int a = evenodd(no);
	if(a==1)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
}
int evenodd(int no) {

	if(no%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}