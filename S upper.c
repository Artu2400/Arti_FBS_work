#include<stdio.h>
#include<String.h>
void mystrupper(char*str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-('a'-'A');
		}
		i++;
	}
}
	int main()
	{
		char str[100];
		printf("enter the string");
		gets(str);
		
		mystrupper(str);
		printf("Uppercase string:%s\n",str);
		
		return 0;
	}

