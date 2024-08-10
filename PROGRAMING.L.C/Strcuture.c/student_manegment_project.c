#include<stdio.h>
void login();
void add();
void view();

void searh();
void result();

void main(){
	
	char user[20]={"akash"};
	char pass[20]={"pass@555"};
	char a[20];
	char b[20];
	int o=0,err=0;
	
	for(o=0;o<3;o++){
	printf("Enter the username= ");
	gets(a);
	
	printf("\n \nEnter password =");
	gets(b);
	
	if(strcmp(user,a)==0 && strcmp(pass,b)==0 ){
		printf("login sucessfully \n");
		err++;
		login();
		break;
	}
	else if (strcmp(user,a)!=0 && strcmp(pass,b)==0){
			printf("user invalid \n");
			err++;
	}
	else if (strcmp(user,a)==0 && strcmp(pass,b)!=0){
			printf("password invalid \n");
			err++;
	}
	else{
			printf("username & password  invalid \n");
			err++;			
	}
	
	
}

		
}
void login(){
	
	int ch;
	printf("\n \n 1.Add Record \n2.View Record \n3.Search Reccord \n4.Update Record \n5.Result\n6.Exit\n");
	
	printf(" \n \n Enter your Choice=");
	scanf("%d",&ch);
	switch(ch){
		case 1: add();
		break;
		case 2: view();
		break;
		
		
	}
	
}
void add(){
	int ch,i,rol;
	char na[10],add[20];
	int ph,cl,mr;
	printf("Enter How many Record  you want to add=");
	scanf("%d",&ch);
	for (i=0;i<=ch;i++){
		printf("Enter Student Roll Number:");
		scanf("%d",&rol);
		
		printf("Enter Student Name:");
		scanf("%s",&na);
		
		printf("Enter Student Address:");
		scanf("%s",&add);
		
		printf("Enter Student Phone Number:");
		scanf("%if",&ph);
		
		printf("Enter Student class:");
		scanf("%d",&cl);
		
		printf("Enter Student mark:");
		scanf("%d",&cl);
		
		
		login();
	}
	
	
}
void view()
{
	
	printf("sr.no \t Rno \tname \tAddr \t\tphno \tclass");
		
}

