#include<stdio.h>
void main()
{
	int a[100][100],i,j,b,r,p;
	printf("enter how many rows you want :");
	scanf("%d",&r);
	
	printf("enter how many col you want :");
	scanf("%d",&b);
	
	printf("enter array element :\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter array element =\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
    }
    printf("\n enter element are=");
    scanf("%d",&p);
    //position
    
    for(i=0;i<r;i++)
    {
    	for(j=0;j<b;j++)
    	{
    	if(a[i][j]==p)
    	{
    	  printf("position= %d ,%d \n",i,j); 
    	}
    	printf("\n");
	   }
		
    }


}
