#include<stdio.h>
void main()
{
	int a=10;
	int *b,*c;
	b=&a;
	c=&b;
	
	printf("%d \n",a);
	printf("%d \n",&a);
	printf("%d \n",b);
	printf("%d \n",*b);
	printf("%d \n",&b);
	printf("%d \n",c);
	printf("%d \n",&c);
	
}
