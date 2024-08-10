#include<stdio.h>
void main()
{
	int a,b;
	printf("enter number 1=");
	scanf("%d",&a);
	printf("enter number 2=");
	scanf("%d",&b);
	
	while(a<=b)
	{
		printf("\n %d",a);
		a++;
	}
}
