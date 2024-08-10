#include<stdio.h>
void main()
{
	int n,sum=0,a,i;
	float average;
	
	printf("enter how maney number you wontes to add =");
	scanf("%d",&n);
	printf("\n enter number =");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum=sum+a;
	}
	printf("\n sum=%d\n",sum);
	average=sum/n;
	printf("average =%f\n",average);
}
