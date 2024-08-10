#include<stdio.h>
int area();
int main()
{
  area();
}
int area()
{
	float l,w,a;
	printf("enter a length =");
	scanf("%f",&l);
	printf("enter a width =");
	scanf("%f",&w);
	a=l*w;
	printf("area of retaingle =%f",a);
}
