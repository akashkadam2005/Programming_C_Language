#include<stdio.h>
void main()
{
	int a,b;
	printf("enter number 1=");
	scanf("%d",&a);
	printf("enter number 2=");
	scanf("%d",&b);
	
    do
	{
		printf("\n %d",a);
		a++;
	}	while(a<=b);
}
