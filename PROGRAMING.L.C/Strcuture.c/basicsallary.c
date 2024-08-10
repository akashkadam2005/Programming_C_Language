#include<stdio.h>
void main()
{
	int a;
	float b,c;
	printf("enter basic salary =");
	scanf("%d",&a);
	
	
	if(a<=10000)
	{
		b=a*0.2;
		c=a*0.8;
		printf("%d",a);
	}
	else if(a<2000)
	{
		b=a*0.25;
		c=a*0.90;
		printf("%d",a);
	}
	else if(a<3000)
	{
		b=a*0.;
		c=a*0.8;
		printf("%d",a);
	}
}
