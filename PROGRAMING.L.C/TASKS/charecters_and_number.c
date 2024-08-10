#include<stdio.h>
void main()
{
	char charecter;
	
	printf("enter value=");
	scanf("%c",&charecter);
	
	if(charecter>='a'&& charecter<='z'||charecter>='A'&& charecter<='Z')
	{
		printf("this is alphabet");
	}
	
	else if(charecter>='1' && charecter<='9')
	{
		printf("this is number");
	}
	else
	{
		printf("this is zero");
	}
	}


