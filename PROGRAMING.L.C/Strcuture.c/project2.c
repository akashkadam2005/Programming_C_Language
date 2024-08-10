 #include<stdio.h>
int login();
void record();
void view();
void search();
void update();
void all(),names(),adds(),mobilen();
void Result();
void Exit();

struct add
{
	char name[10],add[10],gread;
	int roll,mark,per,cls,mobile[10],Result;
	
}a[50];
int i=0,lim,num;


void main()
{
	
login();

int op,exit=0;

do{
	
	printf("\n1.add record\n2.view\n3.search\n4.update\n5.Result\n.6exit");
	
	printf("\n select your opstion=");
	scanf("%d",&op);
	
	switch (op)
	{
		case 1:
	    record();
		break;	
		
       case 2:
       	view();
	   break;
	   
	   case 3:
       	search();
	   break;
	   
	   	case 4:
       	update();
	   break;
	   
	   case 5:
       Result();
	   break;
		
	   case 6:
       exit++;
	   break;
	}
	
}while (exit==0);

}
int login()
{
	int attempt=0,sucess=0;
	char user[10]="akash",pass[10]="pass@555",uname[10],upass[10];
	
	do {
		
		printf("\n enter user name=");
		gets(uname);
		printf("\n enter passward=");
		gets(upass);
	
		
		if(strcmp(user,uname)==0 && strcmp(pass,upass)==0)
		{
			printf("\n login sucessfull");
			sucess++;
		}
		else if (strcmp(user,uname)==0)
		{
			printf("\n incorrect passward");
			attempt++;
		}
		else if (strcmp(pass,upass)==0)
		{
			printf("\n incorrect user nane");
			attempt++;
		}
		else 
		{
			printf("\n both are incorrect");
			attempt++;
		}
	
	}while (attempt<=2&& sucess==0);

}
void record()
{
	printf("\n how many records you want to add=");
	scanf("%d",&lim);
	
	for(i=0;i<lim;i++)
	{
		
	printf("\n Enter stdunt roll number=");
	scanf("%d",&a[i].roll);	

	printf("\n Enter stdunt name=");
	scanf("%s",&a[i].name);
	
	printf("\n Enter stdunt class=");
	scanf("%d",&a[i].cls);
	
	printf("\n Enter stdunt address=");
	scanf("%s",&a[i].add);
	
	printf("\n Enter stdunt mobile number=");
	scanf("%d",&a[i].mobile);
	
	printf("\n Enter stdunt mark=");
	scanf("%d",&a[i].mark);
	
	a[i].per=((a[i].mark*100)/500);
	
	if(a[i].per>=80)
	{
		a[i].gread='A';
	}
	else 	if(a[i].per>=70)
	{
		a[i].gread='B';
	}
	else 	if(a[i].per>=60)
	{
		a[i].gread='c';
	}
	else 	if(a[i].per>=50)
	{
		a[i].gread='D';
	}
	else 	if(a[i].per>=35)
	{
		a[i].gread='E';
	}
		else 	if(a[i].per<35)
	{
		a[i].gread='F';
	}
	
	
	printf("\n Enter another record:-");
	
	}
	printf("\n congractulation data collection process complete!!!");
	}	
	
void view()
{
	printf("\n\n \troll num \tname \tclass \taddress \tmobile num \tmark \tPercentage\tGrade\n");
	
	
	for(i=0;i<lim;i++)
	{
	    printf("\t%d",a[i].roll);
		printf("\t %s",a[i].name);
		printf("\t%d",a[i].cls);
		printf("\t%s",a[i].add);
		printf("\t%d",a[i].mobile);
		printf("\t%d",a[i].mark);
		printf("\t%d",a[i].per);
		printf("\t %c",a[i].gread);
	    printf("\n");
	}
	
}

void search()
{
	
	//int num;
	
printf("\n which record you want to search.Enter roll number:-");
scanf("%d",&num);

for(i=0;i<lim;i++)
{
	if(a[i].roll==num)
	{
		printf("\n\n \troll num \tname \tclass \taddress \tmobile num \tmark \tPercentage \tGrade\n");
		
		printf("\t%d",a[i].roll);
		printf("\t%s",a[i].name);
		printf("\t%d",a[i].cls);
		printf("\t%s",a[i].add);
		printf("\t%d",a[i].mobile);
		printf("\t%d",a[i].mark);
		printf("\t%d",a[i].per);
		printf("\t %c",a[i].gread);
	    printf("\n");
	}
	
}

}	
	
void update()
{
	
	int up;
	
	printf("\n which record you want to update.Enter roll number:-");
    scanf("%d",&num);
    printf("\n1.name\n2.address\n3.mobile\n4.all");
    printf("\n Enter your choise :-");
	
    scanf("%d",&up);
    
    
    for(i=0;i<=lim;i++)
    {
	if(a[i].roll==num)
	{
		switch (up)
		{
			case 1:
		    	printf("\n Enter stdunt name=");
	scanf("%s",&a[i].name);	
		    break;
		    
		    case 2:
		   printf("\n Enter stdunt address=");
	scanf("%s",&a[i].add);
		    break;
		    
		    case 3:
		    printf("\n Enter stdunt mobile number=");
	scanf("%s",&a[i].mobile);
			break;
			
			case 4:
		    printf("\n Enter stdunt roll number=");
	scanf("%d",&a[i].roll);	
	
	       

	printf("\n Enter stdunt name=");
	scanf("%s",&a[i].name);
	
	printf("\n Enter stdunt class=");
	scanf("%d",&a[i].cls);
	
	printf("\n Enter stdunt address=");
	scanf("%s",&a[i].add);
	
	printf("\n Enter stdunt mobile number=");
	scanf("%d",&a[i].mobile);
	
	printf("\n Enter stdunt mark=");
	scanf("%d",&a[i].mark);
	
		a[i].per=((a[i].mark*100)/500);
	
	if(a[i].per>=80)
	{
		a[i].gread='A';
	}
	else 	if(a[i].per>=70)
	{
		a[i].gread='B';
	}
	else 	if(a[i].per>=60)
	{
		a[i].gread='c';
	}
	else 	if(a[i].per>=50)
	{
		a[i].gread='D';
	}
	else 	if(a[i].per>=35)
	{
		a[i].gread='E';
	}
		else 	if(a[i].per<35)
	{
		a[i].gread='F';
	}
		
			break;	
			
		}
	}

}
}	
	
void Result()
{
printf("\n ########## pass student ##########\n");

printf("\n\n \troll num \tname \tclass \taddress \tmobile num \tmark \tPercentage\tGrade\n");  

for(i=0;i<lim;i++)
{
	if(	a[i].per>=35)
	{
	    printf("\t%d",a[i].roll);
		printf("\t        %s",a[i].name);
		printf("\t%d",a[i].cls);
		printf("\t%s",a[i].add);
		printf("\t        %d",a[i].mobile);
		printf("\t        %d",a[i].mark);
		printf("\t    %d",a[i].per);
		printf("\t         %c",a[i].gread);
	    printf("\n");	
	
	}
}

printf("\n########## fail student ############\n");

printf("\n\n \troll num \tname \tclass \taddress \tmobile num \tmark \tPercentage\tGrade\t\n");

for(i=0;i<lim;i++)
{
	if(	a[i].per<35)
	{
	    printf("\t%d",a[i].roll);
		printf("\t        %s",a[i].name);
		printf("\t%d",a[i].cls);
		printf("\t%s",a[i].add);
		printf("\t        %d",a[i].mobile);
		printf("\t        %d",a[i].mark);
		printf("\t    %d",a[i].per);
		printf("\t         %c",a[i].gread);
	    printf("\n");
	}
}

}
