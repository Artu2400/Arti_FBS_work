#include<stdio.h>
#include<String.h>
 char*mystrcpy(char*,char*);
void main()
{
	char str[10]="hello";
	char org[10];
	mystrcpy (org,str);
	printf("%s",org);
}
 char*mystrcpy(char*dest,char*src)
{
	int i=0;
	while(src[i]!='\0')
	{
		dest[i]=src[i];

		i++;
		}	
		dest[i]='\0';
		return dest;
	
}
