#include<stdio.h>
void main()
{
	int a,i;
	
	printf("enter the number=");
	scanf("%d",&a);
	
	for(i=1;i<11;i++)
	{
		printf("%d %d*%d\n",a,i,a*i);
	}
}
