#include<stdio.h>
void main()
{
	int a[10],i,b;
	printf("enter limit =");
	scanf("%d",&b);
	
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements are=");
	for(i=0;i<b;i++)
	{
		printf(" \n %d",a[i]);
	}
	printf("\n even number=");
	for(i=0;i<b;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\n",a[i]);
		}
	}
	printf("\n odd number=");
	for(i=0;i<b;i++)	
		{
			if(a[i]%2!=0)
			{
		 printf("\n %d",a[i]);
		    }
		}
	
	

}
