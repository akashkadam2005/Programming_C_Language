#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter Number 1 =");
	scanf("%d",&a);
	printf("Enter Number 2 =");
	scanf("%d",&b);
	printf("\nadd=1 \nsub=2 \ndiv=3 \nmod=4 \nmul=5");
	printf("\nenter your choice=");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf(" Add=%d",a+b);
			break;
		case 2:
			printf("Sub=%d",a-b);
			break;	
		case 3:
			printf("Div=%d",a/b);
			break;	
		case 4:
			printf("Mod=%d",a%b);
			break;	
		case 5:
			printf("Mul=%d",a*b);
			break;	
			
	}
}
