//Student (rollNo, name, marks)
#include<stdio.h>
struct student 
{
	int rollno;
	char Name[10];
	int marks;
};
void main()
{
	struct student s1,s2;
	printf("enter the student rollno \n");
	scanf("%d",&s1.rollno);
	printf("enter the student Name \n");
	scanf("%s",&s1.Name);
	printf("enter the student marks \n");
	scanf("%d",&s1.marks);
	
	printf("enter the student rollno \n");
	scanf("%d",&s2.rollno);
	printf("enter the student Name \n");
	scanf("%s",&s2.Name);
	printf("enter the student marks \n");
	scanf("%d",&s2.marks);
		
	printf("rollno=%d Name=%s marks=%d \n ",s1.rollno,s1.Name,s1.marks);
	printf("rollno=%d Name=%s marks=%d \n",s2.rollno,s2.Name,s2.marks);
	}	
	
