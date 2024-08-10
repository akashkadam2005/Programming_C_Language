#include<stdio.h>
int r ;
float pie=3.14;
void area();
void dia();
void cir();
void exit();
int main()
{
	int ch;
	printf("enter radius=");
	scanf("%d",&r);
	printf("\n1.area\n2.dia\n3.cir\n4.exit");
	while(1)
	{
	
	printf("\nEnter your choice=");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: 
			area();
			break;
		case 2:
			dia();
			break;
		case 3: 
			cir();
			break;
		case 4:
			exit();
			return 0;
	}
}
}
void area()
{
	int s;
	s=pie*r*r;
	printf("\narea of circle=%d",s);
}
void dia()
{
	int b;
	b=r*r;
	printf("\ndiameter=%d",b);
}
void cir()
{
int d;
d=pie*pie*r;	
	printf("\ncircumferance=%d/",d);
}

