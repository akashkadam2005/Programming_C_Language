#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("enter number 1 =");
	scanf("%d",&a);
	printf("enter number 2 =");
	scanf("%d",&b);
	printf("enter number 3 =");
	scanf("%d",&c);
	
	if(a>b&&a>c)
	{
		printf("\n a is grater %d",a);
	}
    else if(b>a&&b>c)
	{
		printf("\n b is grater %d",b);
	}
	else
	{
		printf("\n c is grater %d",c);
	}
	
}
