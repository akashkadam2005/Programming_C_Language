#include<stdio.h>
void main()
{
	int a[10],i;
	float b[10]={1,2,55,6,98,4};
	char c[10]={'E','R','U','T'};
	printf("\n ENTER ARRAY=");
	for(i=0;i<=4;i++)
	{
		printf("\n a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n floating number=");
	for(i=0;i<=4;i++)
	{
		printf("\n %f",b[i]);
    }
    	printf("\n char value=");
	for(i=0;i<=4;i++)
	{
		printf("\n %c",c[i]);
    }
}
