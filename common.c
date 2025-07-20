//WAP in c for to find common elementin two arrays ar=1,2,3,4,5;brr=1,6,7,3,2
#include<stdio.h>
void  main()
{
	int arr[]={1,2,3,4,5};
	int brr[]={1,6,7,3,2};
	int n1=sizeof(arr);
	int n2=sizeof(brr);
	int i,j;
	printf("common  element are:");
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
	if(arr[i]==brr[j])
	{
		printf("%d",arr[i]);
		break;
		
	}
		}
			}	
				
	return 0;
}