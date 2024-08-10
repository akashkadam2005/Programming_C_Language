#include<stdio.h>
void main()
{
int a,b,c;

printf("enter number a=");
scanf("%d",&a);

printf("enter number b=");
scanf("%d",&b);

printf("enter number c=");
scanf("%d",&c);

if (a>b && a>c)
{
	printf("a is grater   ");
}
else if(b>c && b>a)
{
	printf("b is grater");
}

else if(c>a && c>b)
{
	printf("c is grater");
}
else
{
	printf("all number are equal");
}
}
