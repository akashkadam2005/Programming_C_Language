#include<stdio.h>
void main()
{
	int a[2][2],i,j,b[2][2];
	
	//1st
	printf("enter array element 1st=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	printf("enter array number 1st=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
	}
	
	//2nd
	printf("enter array element 2nd=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
		scanf("%d",&b[i][j]);
	}
	}
	printf("enter array number 2nd=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
		printf("%d\t",b[i][j]);
	}
	printf("\n");
	}
	
	//addition
	printf(" \n all addition=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	//sub
	printf(" \n all sub=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",a[i][j]-b[i][j]);
		}
		printf("\n");
	}
	
	//mul
	printf(" \n all mul=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",a[i][j]*b[i][j]);
		}
		printf("\n");
	}

}
