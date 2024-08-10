#include<stdio.h>
void main()
{
	char a[10];
	int scount,ccount ,i;
	printf("enter your password =");
	
	for(i=0;i<5;i++)
	{
	scanf("%c",&a[i]);	
	}
	printf("\n your password=");
	for(i=0;i<5;i++)
	{
		printf("%c",a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if('A'>=a[i] || a[i]<='z')	
	
	{
     ccount=ccount+1;
    }
   }

else if('a'>=a[i] || a[i]<='z')
{
scount=scount+1;
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
}
