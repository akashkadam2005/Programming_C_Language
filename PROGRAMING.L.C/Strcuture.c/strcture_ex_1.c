#include<stdio.h>
struct num
{
	int a;
	float b;
	char c;
	
};
void main()
{
struct num n;

n.a=10;
n.b=9.14;
n.c='Q';

printf("\n a=%d",n.a);	
printf("\n b=%f",n.b);
printf("\n c=%c",n.c);
}
