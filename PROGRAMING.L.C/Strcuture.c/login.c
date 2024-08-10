# include<stdio.h>
void login();
void add();
void view();
void search();
void result();
void main()
{
	
	char user[20]={"akash"};
	char pass[20]={"pass@555"};
	char a[20];
	char b[20];
	int o=0,err=0;
	
	for(o=0;o<3;o++)
	{
		printf("Enter username =");
		gets(a);
		
		printf("enter password =");
		gets(b);
		
		if(strcmp(user,a)==0&&strcmp(pass,b)==0)
		{
			printf("login sucessfuly \n");
			err++;
			login();
		   break;
			
		}
		else if(strcmp(user,a)!=0&&strcmp(pass,b)==0)
		{
			printf("user invalid \n");
		}
		else if(strcmp(user,a)==0&&strcmp(pass,b)!=0)
		{
			printf("password invalid \n");
		}
		else
		{
			printf("username & password invalid \n");
		}
	}
}
void login()
{
	int ch;
	printf("\n1.Add records \n2.view records \n3.search records \n4.Update recorde \n5.Result \n6.exit");
	printf("\n \n enter your choice =");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			add;
			break;
	}
}
void add()
{
	int ch;
	printf("enter how maney records you wants to add =");
}
