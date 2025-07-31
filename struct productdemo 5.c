//Product (id, name, quantity, price)
#include<stdio.h>
struct product
{
	int id;
	char name[10];
	int quantity;
	int price;
};
void main()
{
	struct product s1;
	printf("enter the product id \n");
	scanf("%d",&s1.id);
	printf("enter the product name \n");
	scanf("%s",&s1.name);
	printf("enter the product quantity \n");
	scanf("%d",&s1.quantity);
	printf("enter the product price \n");
	scanf("%d",&s1.price);	
}
