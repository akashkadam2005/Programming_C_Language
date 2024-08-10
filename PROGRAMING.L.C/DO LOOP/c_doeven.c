#include<stdio.h>
void main()
{
	int a=1;
    do
	{
		printf("\n %d",a);
		a++;
	}	while (a<=10);
	
		printf("\n even number are :");
		a=1;
		do
		{
			if(a%2==0)
			{
				printf("\n %d",a);
			}
			a++;
		}while(a<=10);
	
}
