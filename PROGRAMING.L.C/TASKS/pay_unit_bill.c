#include<stdio.h>
void main()
{ 
    int unit,Bill,r,a,value=50,b;
    int rate=1, rate2=2 ,rate3=4,rate5=6;
    
    printf("enter unit=");
    scanf("%d",&unit);
    if(unit>=0 &&unit<=50)
    {
    
	Bill= unit*rate ;
    printf(" print Bill=%d",Bill); 
	}
	else if(unit>=51&&unit<=100)
	{ 
	 r=unit-50;
	 value=50;
	 Bill=(r*rate2+value);
	 printf("print bill=%d",Bill);  
	
	}
	else if(unit>=101&&unit<=200)
	{ 
	r=unit-100;
	a=100;
	Bill=(r*rate3+a+value);
	printf("print bill=%d",Bill);
	}
	else if(unit>=201&&unit<=300)
	{ 
	r=unit-150;
	b=200;
	Bill=(r*rate5+a+b+value);
	printf("print bill=%d",Bill);
    }
      
}
