/*Create a structure Book with data members as bname, id, author, price. Accept the
values of all these members from user and display them.*/
#include<stdio.h>
struct book
{
	int id;
	char bname[100];
	char author[100];
	float price;
};
void main()
{
	struct book b;
	printf("enter the id \n");
	scanf("%d",&b.id);
	printf("enter the bname \n");
	scanf("%s",&b.bname);
	printf("enter the author \n");
	scanf("%s",&b.author);
	printf("enter the price \n");
	scanf("%2f",&b.price);
	
	 printf("\n--- Book Details ---\n");
    printf("Book id: %d\n", b.id);
    printf("Book name: %s\n", b.bname);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

