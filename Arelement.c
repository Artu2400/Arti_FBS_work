#include<stdio.h>
void main()
{
	int arr[5];
	int sum=0;
	int sum0=0;
	printf("enter 5 element of an array ");
	for(int i=0;i<5;i++)
{
	scanf("%d",&arr[i]);
	if(arr[i]%2==0)
	sum=sum+arr[i];
	else 
	sum0=sum0+arr[i];

}
printf("%d\n%d",sum,sum0);
}










