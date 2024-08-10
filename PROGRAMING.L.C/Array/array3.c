#include<stdio.h>
void main()
{
	int a[10],i;
	float b[10];
	char c[10];
	printf("enter array element=");
	for(i=0;i<=4;i++)
	{
		scanf(" %d",&a[i]);
	}
	printf("enter array element=");
	for(i=0;i<=4;i++)
	{
		printf("\n %d",a[i]);
	}
	//float
	printf("\n enter floating element=");
	for(i=0;i<=4;i++)
	{
		scanf("\n %f",&b[i]);
	}
	printf("floating number=");
	for(i=0;i<=4;i++)
	{
		printf("\n %f",b[i]);
	}
	//char
		printf("\n enter char element=");
	for(i=0;i<=4;i++)
	{
		scanf("\n %c",&c[i]);
	}
	printf("char value=");
	for(i=0;i<=4;i++)
	{
		printf("\n %c",c[i]);
	}
	
}
