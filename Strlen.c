#include<stdio.h>
#include<String.h>
int mystrlen( char str[]);
void main()
 {
 	char str[100];
 	printf("enter the string");
 	gets(str);
 	int len=mystrlen(str);
 	printf("length of the string is :%d\n",len);
 	return 0;
 }
 	int mystrlen(char str[])
 	{
 		int len=0;
 		while(str[len]!='\0')
 		{
 			len++;
		 }
		 return len;
	 }
 


