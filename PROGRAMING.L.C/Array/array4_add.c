#include<stdio.h>
void main()
{
	int a[10],i;
	int b[10];
	printf("enter array 1st =\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\narrey element are=\n");
	for(i=0;i<=4;i++)
	{
		printf("\t %d",a[i]);
	}
	//2nd
	printf("\n enter array 2st =\n");
	for(i=0;i<=4;i++)
	{
		scanf(" \n %d",&b[i]);
	}
	printf("\n array element are 2nd=\n");
	for(i=0;i<=4;i++)
	{
		printf("\t %d",b[i]);
	}
	printf("\n \n addition all\n");
	for(i=0;i<=4;i++)
	{
	printf("\t %d",a[i]+b[i]);
    }
    //sub
    printf("\n sub all\n");
	for(i=0;i<=4;i++)
	{
	printf("\t %d",a[i]-b[i]);
    }
    //mul
     printf("\n mul all\n");
	for(i=0;i<=4;i++)
	{
	printf("\t %d",a[i]*b[i]);
    }
    
}
