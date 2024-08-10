#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the number 1=");
	scanf("%d",&a);
	printf("enter the number 2=");
	scanf("%d",&b);
	printf("enter the number 3=");
	scanf("%d",&c);
	
	if(a<b&&a<c)
	{
		printf("number fist is smaller");
	}
	if(b<a&&b<c)
	{
		printf("number secound is smaller");
	}
	if(c<b&&c<b)
	{
		printf("number thired is smaller");
	}
	
}
