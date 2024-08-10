#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the number =");
	scanf("%d",&a);
	printf("\ntable=1 \neven=2 \nodd=3 \nexit=4");
	printf("\nenter your choice=");
	scanf("%d",&c);
	switch(a)
	{
	case 1:
	     for(b=1;b<=10;b++)
        {
        	printf("\n %d*%d=%d",a,b,(a*b));
        	break;
	    }	
			
		
		case 2:
			if(a%2==0)
		{
			printf("even no");
			break;
		}
				
	}
}
