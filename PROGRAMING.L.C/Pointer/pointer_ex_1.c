#include<stdio.h>
void main()
{
	int a=10;
	int *b;
	b=&a;
	printf("1. %d \n",a);
	printf("2. %d \n",&a);
	printf("3. %d \n",b);
	printf("4. %d \n",*b);
	
}
