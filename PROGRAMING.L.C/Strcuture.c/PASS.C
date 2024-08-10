#include<stdio.h>
int main()
{
	char pass[10];
	printf("Enter The Password=");
	gets(pass);
	printf("Your Password Is=%s\n",pass);
	if('A'<'Z'&&'a'<'z'&&'0'<'9')
	{
		printf("Your Password is Valid");
	}
	else
	{
		printf("Your Password is Invalid");
	}
}

