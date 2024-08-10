#include<stdio.h>
int main()
{
	char pass[10];
	int i,ccount=0,scount=0;
printf("\n Enter the password=");
for(i=0;i<5;i++)
{
scanf("%c",&pass[i]);
}
printf("\n Your password \n");
for(i=0;i<5;i++)
{
printf("%c",pass[i]);
}

for(i=0;i<5;i++)
{
if('A'>=pass[i] || pass[i]<='Z')
{
ccount=ccount+1;
}

else if('a'>=pass[i] || pass[i]<='z')
{
scount=scount+1;
}

}


if(scount!=0 && ccount!=0)
{
	printf("\n Password is Valid");
}
else
{
	printf("\n Password is in-Valid");
}


}
