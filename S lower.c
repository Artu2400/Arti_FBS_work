#include<stdio.h>
#include<String.h>
void mystrlower(char*str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]=str[i]-('A'-'a');
		}
		i--;
	}
}
	int main()
	{
		char str[100];
		printf("enter the string");
		gets(str);
		
		mystrlower(str);
		printf("lowercase string:%s\n",str);
		
		return 1;
	}

