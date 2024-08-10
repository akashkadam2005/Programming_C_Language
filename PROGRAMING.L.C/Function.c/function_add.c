#include<stdio.h>
void add();
int msg();
void main()
{
	printf("\n test\n");
	add();
	printf("\n test 1");
	printf("\n test 2");
	add();
	printf("\n test 3");
	printf("\n test 4");
	add();
}
void add()
{
int a,b,c;
printf("\n enter value of a=");
scanf("%d",&a);
printf("\nenter value of b=");
scanf("%d",&b);
c=a+b;
printf("\n \n addition =%d \n \n",c);
msg();
}
int msg()
{
	printf("\n hii \t sanket\t pranav");
}

