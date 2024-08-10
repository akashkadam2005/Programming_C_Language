#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("enter side 1=");
	scanf("%d",&a);
	printf("enter side 2=");
	scanf("%d",&b);
	printf("enter side 3=");
	scanf("%d",&c);
	
	if(a!=b && b!=c && c!=a)
	{
		printf("scalen triangle");
	}
	else if(a==b && a==c )
	{
		printf("equilatiral triangle");
	}
	else
	{
		printf("isoscalan traingle");
	}
	
}
