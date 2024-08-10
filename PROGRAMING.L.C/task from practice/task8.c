#include<stdio.h>
void main()
{
	int a[10],ch,limit,i,sum=0,sa,min,max;
	while(1)
	{
	printf("\n\n\n1.Create Array\n2.Display Array Element\n3.Sum of All Array Elements\n4.Find max and min\n5.Search Element\n6.Exit");
	printf("\n enter your choice =");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("enter how many element you want =");
			scanf("%d",&limit);
			printf("enter array element=");
			for(i=0;i<limit;i++)
			{
				scanf("%d",&a[i]);
			}
		case 2:
		printf("array element are =\n");
		for(i=0;i<limit;i++)
		{
			printf("\t %d",a[i]);
		}	
		break;
		
		case 3:
		for(i=0;i<limit;i++)
		{
			sum=sum+a[i];
		}
		printf("\n sum of all array element =%d",sum);
		break;
		
		case 4:
			min=a[0];
			max=a[0];
			for(i=0;i<limit;i++)
			{
				if(min>a[i])
				{
					min=a[i];
				}
				else if(max<a[i])
				{
					max=a[i];
				}
			}
        printf("\n minimum element of an array is %d",min);
        printf("\n maximum element of an array is %d",max);
        break;
        
        case 5:
        	printf("\n enter which element you wants to search =");
        	scanf("%d",&sa);
        	for(i=0;i<limit;i++)
        	{
        		if(sa==a[i])
        		{
        			printf("\n %d is found in %d pasition",a[i],i);
				}
			}
			break;
			case 6:
				return 0;
			}
		}
	}


