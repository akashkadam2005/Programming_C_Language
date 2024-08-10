#include<stdio.h>
void main()
{
	int a;
	printf("\n enter number=");
	scanf("%d",&a);
	
	if(a>=0 && a<=100)
	{
		printf("\n in range");
	}
	else
	{
		printf("not range");
	}
}
