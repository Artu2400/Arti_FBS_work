//WAP to Calculate the Number of Words Present in a String
#include<stdio.h>
#include<string.h>
void main()
{
	char a[200];
	int i,c=1;
	printf("enter any sentence");
	gets(a);
	for(i=0;a[i];i++)
	{
		if(a[i]==32)    
		{
			c++;
		}
	}	
	printf("\n total present on the sentence are %d ",c);
	
	return 0;
	
}