#include<stdio.h>
void main()
{ 
    int unit,bill,rem,value=50,a,b,c;
    int rate=1,rate2=2, rate3=4,rate4=6,rate5=8;
    
    printf("enter unit=");
    scanf("%d",&unit);
    if(unit>=0 &&unit<=50)
    {
    
	bill= unit*rate ;
    printf(" print Bill=%d",bill); 
	}
	else if(unit>=51&&unit<=100)
	{ 
	 rem=unit-50;
	 value=50;
	 bill=(rem*rate2+value);
	 printf("print bill=%d",bill);  
	
	}
	else if(unit>=101&&unit<=200)
	{ 
	rem=unit-100;
	a=100;
	bill=(rem*rate3+a+value);
	printf("print bill=%d",bill);
	}
	else if(unit>=201&&unit<=300)
	{ 
	rem=unit-150;
	b=200;
	bill=(rem*rate4+a+b+value);
	printf("print bill=%d",bill);
    }
   else if(unit>300)
   {
   	rem=unit-200;
   	c=300;
   	bill=(rem*rate5+c+value);
	printf("print bill=%d",bill);
   }
}
