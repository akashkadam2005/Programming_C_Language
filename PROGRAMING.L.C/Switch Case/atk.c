#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter number 1=");
	scanf("%d",&a);
	printf("enter number 2=");
	scanf("%d",&b);
	printf("\nadd=1 \nsub=2 \ndiv=3 \n mod=4 \nmul=5");
	printf("\nenter your choice=");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf(" addtion=%d",a+b);
			break;
		case 2:
			printf("sub=%d",a-b);
			break;	
		case 3:
			printf("div=%d",a/b);
			break;	
		case 4:
			printf("mod=%d",a%b);
			break;	
		case 5:
			printf("mul=%d",a*b);
			break;	
			
	}
}
