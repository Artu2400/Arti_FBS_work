#include<stdio.h>
void main()
{
	int no,reversed= 0,remainder,original;
	printf("enter a  number");
	scanf("%d ",& no);
	original=no;
	
	while(no!=0)
	{
		remainder=no%10;
		reversed=reversed*10+remainder;
		no=no/10;
			}
	
	
	if(original==reversed)
	{
		printf("this number is a palindrome");
	}
	else
	{
		printf("this number is not a palindrome");
	}
	
	
}