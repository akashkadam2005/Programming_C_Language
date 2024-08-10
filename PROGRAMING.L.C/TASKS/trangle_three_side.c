#include<stdio.h>
void main()
{
	int a,b,c,add,add2,add3;
	printf("enter side 1=");
	scanf("%d",&a);
	
	printf("enter side 2=");
	scanf("%d",&b);
	
	printf("enter side 3=");
	scanf("%d",&c);
	
	if (a>b && a>c)
	{
		add=b+c;
		if(add>=a)
		{
		
		printf("traingle is valid");
	}
	else
	{
		printf("traingle is invalid");
	}
}
	 if(b>a && b>c)
	{
		add2=a+c;
		if(add2>=b)
		{
		
		printf("traingle is valid");
	}
	else
	{
		printf("traingle is invalid");
	}
}
	else if(c>b && c>a)
	{
		add3=b+a;
		if (add3>=c)
	{
			printf("traingle is valid");

	}
	else
	{
		printf("trangle is invalid");
	}
}
}
