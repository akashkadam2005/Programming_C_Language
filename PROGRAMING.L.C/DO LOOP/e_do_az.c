#include<stdio.h>
void main()
{
	char a='a',b;
	
	printf("enter charecter=");
	scanf("%c",&b);
	
	do
	{
	printf("%c\n",a);
	a++;
    }while(a<=b);
}
