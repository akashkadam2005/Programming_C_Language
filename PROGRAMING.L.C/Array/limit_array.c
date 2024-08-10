#include<stdio.h>
void main()
{
	int a[10],i,b;
	printf("enter limit =");
	scanf("%d",&b);
	
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements are=");
	for(i=0;i<b;i++)
	{
		printf(" \n %d",a[i]);
	}
}
