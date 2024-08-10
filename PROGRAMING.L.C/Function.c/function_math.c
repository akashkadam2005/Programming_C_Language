#include<stdio.h>
void add();
void sub();
void mul();
void div();
void mod();
int main()
{
	int ch;
	while(1)
	{
	
	printf("\n1.Add\n2.sub\n3.mul\n4.div\n5.mod\n6.exit");
	printf("\nEnter your choice=");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: 
			add();
			break;
		case 2:
			sub();
			break;
		case 3: 
			mul();
			break;
		case 4:
			div();
			break;
		case 5:
			mod();
			break;
		case 6:
			return 0;
	}
}
}
void add()
{
	int a,b,c;
	printf("Enter value of a=");
	scanf("%d",&a);
	printf("Enter value of b=");
	scanf("%d",&b);
	c=a+b;
	printf("\nAddition=%d",c);
}
void sub()
{
		int a,b,c;
	printf("Enter value of a=");
	scanf("%d",&a);
	printf("Enter value of b=");
	scanf("%d",&b);
	c=a-b;
	printf("\substraction=%d",c);
}
void mul()
{
		int a,b,c;
	printf("Enter value of a=");
	scanf("%d",&a);
	printf("Enter value of b=");
	scanf("%d",&b);
	c=a*b;
	printf("\Multiplication=%d",c);
}
void div()
{
		int a,b,c;
	printf("Enter value of a=");
	scanf("%d",&a);
	printf("Enter value of b=");
	scanf("%d",&b);
	c=a/b;
	printf("\ndivision=%d",c);
}
void mod()
{
		int a,b,c;
	printf("Enter value of a=");
	scanf("%d",&a);
	printf("Enter value of b=");
	scanf("%d",&b);
	c=a%b;
	printf("\nMod=%d",c);
}	

