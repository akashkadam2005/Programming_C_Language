#include<stdio.h>
void main()
{
	int a,b,c,d,e,f=5;
	
	printf("enter marks a=");
	scanf("%d",&a);
	printf("enter marks b=");
	scanf("%d",&b);
	printf("enter marks c=");
	scanf("%d",&c);
	printf("enter marks d=");
	scanf("%d",&d);
	printf("enter marks e=");
	scanf("%d",&e);
	printf("total= %d",a+b+c+d+e);
	printf("\n persentage=%d",(a+b+c+d+e)/f);
	
	if(f >=80)
	{
		printf("\n a class grade");
	}
	else if(f >= 50)
	{
		printf(" \n b class grade");
	}
	else if(f >= 40)
	{
		printf("\n c class grade");
	}
	else if (f>=35)
	{
		printf("\n fail");
	}
	else
	{
		printf("sampat");
	}

			
}
