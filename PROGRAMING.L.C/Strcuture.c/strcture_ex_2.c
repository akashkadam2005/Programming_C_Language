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
	
	printf("enter value of a =");
	scanf(" %d",& n.a);
	printf("enter value of b =");
	scanf(" %f",& n.b);
	printf("enter value of c =");
	scanf(" %c",& n.c);
	
	printf("\n a=%d",n.a);
	printf("\n b=%f",n.b);
	printf("\n c=%c",n.c);
	
}
