//WAP to Count the Number of Vowels in a String
#include<stdio.h>
#include<String.h>
void main()
{
	char str[100];
	int i=0,count=0;
	printf("enter a string");
	gets(str);
	
	while(str[i]!='\0')
	{
		char ch=str[i];
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
	count++;
	}
	i++;
	
}
	printf("number of vowels =%d\n",count);
	return 0;
	
}