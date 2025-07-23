#include<stdio.h>
#include<string.h>
void mystrrev(char str[])
{
   	int start=0;
   	int end=0;

   	while(str[end]!='\0')
   	{
   		end++;
	   }
	end--;
	while(start<end)
	{
		char temp=str[start];
		str [start]=str[end];
		str[end]=temp;
	
	start++;
	end--;
}
}
int main()
{
	char str[10];
	printf("enter a string");
	gets(str);
	mystrrev(str);
	printf("revers string:%s\n",str);
	return 0;
}






