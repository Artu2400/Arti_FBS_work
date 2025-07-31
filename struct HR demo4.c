//HR (id, name, salary, commission)
#include<stdio.h>
struct HR
{
	int id;
	char name[10];
	int salary;
	int commission;	
};
void main()
{
	struct HR s1,s2;
	printf("enter the HR id \n");
	scanf("%d",&s1.id);
	printf("enter the HR name \n");
	scanf("%s",&s1.name);
	printf("enter the HR salary \n");
	scanf("%s",&s1.salary);
	printf("enter the HR commission \n");
	scanf("%s",&s1.commission);
	
//	printf("id=%d Name=%s salary=%d  commission=%d \n ",s1.id,s1.Name,s1.salary,s1.commission);	
}
