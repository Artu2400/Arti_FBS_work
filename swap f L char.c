//WAP to Form a New String where the First Character and the Last Character have been exchanged
#include<stdio.h>
#include<String.h>
void main()
{
	char str[100];
	int len;
	printf("enter a string");
	gets(str);
	len=strlen(str);
	
	if(len>=2)
	{
		char temp=str[0];
		str[0]=str[len-1];
		str[len-1]=temp;
	}
	printf("exchange string:%s\n",str);
	return 0;
	
	
}











