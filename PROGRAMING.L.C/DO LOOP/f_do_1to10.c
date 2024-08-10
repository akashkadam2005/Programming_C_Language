#include<stdio.h>
void main()
{
	int a=1,b;
	printf("enter number=");
	scanf("%d",&b);
	
	do
	{
		printf("%d\n",a);
		a++;
	}while(a<=b);
}		
