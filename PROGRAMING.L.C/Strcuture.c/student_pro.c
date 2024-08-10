#include<stdio.h>
int pass();
void main()
{
	pass();
}
int pass()
{

	int a=123,b=456,c,d,ch;
	
	printf("\n1.Add records \n2.view records \n3.search records \n4.Update recorde \n5.Result \n6.exit");
	printf("enter username :");
	scanf("%d",&c);
	
	printf("enter username :");
	scanf("%d",&d);
	
	if(a==b && a==c)
	{
		printf("login succesfully");
	}
	else if(a!=b && a==c)
	{
		printf("\n login failed. \n username invalid.");
		
	}
		else if(a==b && a!=c)
	{
		printf("\n login failed. \n username invalid.");
		
	}
	else if(a!=b && a!=c)
	{
		printf("username & password  invalid\n");
	}

	switch(ch)
	{
		case 1:
			add records;
			break;
		case 2:
			view records;
			break;
		case 3:
			search records;
			break;
		case 4:
			updtae records;
			break;
		case 5:
			result;
			break;
		case 6:
			exit;
			break;	
	}
}
	
	
}
