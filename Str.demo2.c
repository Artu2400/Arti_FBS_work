#include<stdio.h>
void main()
{
	char str[]="ArtiRajmane";
	int i=0;
	int count=0;
	while(str [i]!='\0')
	{
		count++;
		i++;
	}	
	
	printf("the legend of str is %d",count);
	
}