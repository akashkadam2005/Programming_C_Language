#include<stdio.h>
int a,b;
void add();
void sub();
void mul();
void div();
void mod();
int main()
{
	int ch;
	printf("enter num one=");
	scanf("%d",&a);
	printf("enter num two=");
	scanf("%d",&b);
	printf("\n1.Add\n2.sub\n3.mul\n4.div\n5.mod\n6.exit");
	while(1)
	{
	
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
	printf("\nAddition=%d",a+b);
}
void sub()
{
	
	printf("\substraction=%d",a-b);
}
void mul()
{
	
	printf("\Multiplication=%d",a*b);
}
void div()
{
	
	printf("\ndivision=%d",a/b);
}
void mod()
{
		
	printf("\nMod=%d",a%b);
}


