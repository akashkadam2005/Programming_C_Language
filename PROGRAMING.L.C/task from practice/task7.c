#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],i,j,sum1=0,sum2=0,dif;
	
	printf("enter 1st array element=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 2st array element\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("enter 1st array element=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t %d",a[i][j]);
			sum1=sum1+a[i][j];
		}
		printf("\n");
	}
	printf("sum of 1 st array element=%d\n\n \n",sum1);
	printf("enter 2st array element\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		   printf("\t %d",b[i][j]);
		   sum2=sum2+b[i][j];
		}
		printf("\n");
	}
	printf("sum of 2 nd array element=%d\n",sum2);
	printf("sum of matrix=\n");
	if(sum1>=sum2)
	{
		dif=sum2-sum1;
	}
   else
	{
		dif=sum1-sum2;
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	printf("\n diff of two matrix =\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]-b[i][j]);
		}
		printf("\n");
	}

}
