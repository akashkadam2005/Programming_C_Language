#include<stdio.h>
void main()
{
	
	int number,i,fact=1;
	
	printf("enter the number =");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d is: %d",number,fact);
}
