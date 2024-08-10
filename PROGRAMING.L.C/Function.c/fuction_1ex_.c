#include<stdio.h>
void num(int,float,char);
void main()
{
	int a=10;
	float b=6.3;
	char c='R';
	num(a,b,c);
	num(4,5.6,'U');
}
void num(int x,float y,char z)
{
	printf("\n \n \n a=%d",x);
	printf("\n b=%f",y);
	printf("\n c=%c",z);
}

