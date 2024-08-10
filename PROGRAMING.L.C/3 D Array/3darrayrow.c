#include<stdio.h>
int main()
{
	int a[2][2][2],i,j,k,num;
	printf("enter array element =\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		for(k=0;k<2;k++)
		{
			scanf("%d",&a[i][j][k]);
			}	
		}
	}

	printf("enter array element are =\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		for(k=0;k<2;k++)
		{
			printf("%d \t",a[i][j][k]);
			}
			printf("\n");	
		}
		printf("\n \n");
	}

//position
printf("position=\n");
scanf("%d",&num);
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		for(k=0;k<2;k++)
		{
			if(a[i][j][k]==num);
			{
				printf(" \n position is a=[%d][%d][%d]",i,j,k);
			}
		}
	}
}
    
    }
