#include<stdio.h>
int getevenodd();
void main()
{
	if(getevenodd()) {
		printf("even");
	} else {
		printf("odd");
	}
}
int	getevenodd()
	{
		int no=10;
	printf("enter any number");
	scanf("%d",&no);
	if(no%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}