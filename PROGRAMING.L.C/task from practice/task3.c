#include<stdio.h>
void main()
{
	int a,b,c,t,p=3;
	
	printf("entet 1st sub=");
	scanf("%d",&a);
	printf("entet 2nd sub=");
	scanf("%d",&b);
	printf("entet 3rd sub=");
	scanf("%d",&c);
	t=a+b+c;
	printf("\ntotal=%d",t);
	printf("\npersentage=%d",t/p);
	
	if(p<=75)
	{
		printf("\n o grade");
	}
	else if(p>60)
	{
		printf("\n a grade");
	}
	else if(p>50)
	{
		printf("\n b grade");
	}
	else if(p>40)
	{
		printf("\n c grade");
	}
	else
	{
		printf("\n d grade");
	}
	
}
