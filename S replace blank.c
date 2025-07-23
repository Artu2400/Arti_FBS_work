//WAP to Take in a String and Replace Every Blank Space with special symbol.
#include<stdio.h>
#include<String.h>
int main()
{
	char str[100];
	char symbol;
	printf("enter a string");
	gets(str);
	printf("enter the symbol to fill space with");
	scanf("%c",&symbol);	
	
	for(int i=0;str[i]!='\0';i++)
	{
	if(str[i]==' ')
	{
		str[i]=symbol;
	}
}
	printf("modify string:%s\n",str);
	return 0;
}













