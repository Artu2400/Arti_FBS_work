//Admin (id, name, salary, allowance)
#include<stdio.h>
struct Admin
{
	int id;
	char name[10];
	int salary;
	int allowance;
};
void main()
{
	struct Admin s1,s2;
	printf("enter the Admin id \n");
	scanf("%d",&s1.id);
	printf("enter the Admin name \n");
	scanf("%s",&s1.name);
	printf("enter the Admin salary \n");
	scanf("%s",&s1.salary);
	printf("enter the Admin allowance \n");
	scanf("%s",&s1.allowance);
	
	printf("enter the Admin id \n");
	scanf("%d",&s2.id);
	printf("enter the Admin name \n");
	scanf("%s",&s2.name);
	printf("enter the Admin salary \n");
	scanf("%s",&s2.salary);
	printf("enter the Admin allowance \n");
	scanf("%s",&s2.allowance);
	
	
//	printf("id=%d Name=%s salary=%d allowance=%d \n ",s1.id,s1.Name,s1.salary,s1.allowance);
	//printf("id=%d Name=%s salary=%d  allowance=%d\n",s2.id,s2.Name,s2.salary,s2.allowance);
}



