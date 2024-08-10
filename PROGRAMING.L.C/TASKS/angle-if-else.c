#include <stdio.h>
void main()
{
	int a,b,c;
	printf("\n enter angle=");
	scanf("%d",&a);
	printf("\n enter angle=");
	scanf("%d",&b);
	printf("\n enter angle=");
	scanf("%d",&c);
	
	if(a+b+c==180)
	{
		printf("\n valid angle");
	}
	else
	{
		printf("invalid angle");
	}
}

