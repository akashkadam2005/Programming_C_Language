#include<stdio.h>
int area();
int main()
{
  area();
}
int area()
{
	float a,r;
	printf("enter a number =");
	scanf("%f",&r);
	a=3.14*r*r;
	printf("area of circle =%f",a);
}
