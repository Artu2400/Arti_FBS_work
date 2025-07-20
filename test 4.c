//WAP to calculate selling price of book based on cost price and discount.
#include<stdio.h>
void main()
 {
    float costPrice,discount,sellingPrice;
    printf("enter the cost price of book");
    scanf("%f",&costPrice);
    printf("enter the discount percentage");
    scanf("%f",&discount);
    
    if(costPrice<0)
    {
    	return 0;
	}
	else if(discount<0||discount>100)
	{
		return 1;
	}
	else
	{
		sellingPrice=costPrice-(costPrice*discount/100);
		printf("the selling price of book is %.2f\n",sellingPrice);
	}
	
}