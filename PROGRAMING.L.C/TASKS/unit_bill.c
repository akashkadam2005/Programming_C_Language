#include<stdio.h>
void main()
{
	int unit,unit2=1,bill,rate=1,remaining,remaining2,c=4,low=50,a;
	printf("enter unit=");
	scanf("%d",&unit);	

if(unit<=50>0)
{
	
	bill=unit*rate;
	printf("bill=%d", bill);
}
else if(unit>=51 &&unit<=100)
{
	(remaining=unit-50);
	bill=unit*unit2+remaining;
	printf("bill=%d", bill);
	
}
else if(unit>=101 &&unit<=200)
{
	(remaining2=unit-100);
	bill=remaining+a+unit+50;
	printf("bill=%d",bill);
	
}
}
