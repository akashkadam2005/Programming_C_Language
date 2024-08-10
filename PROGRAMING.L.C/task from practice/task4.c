#include<stdio.h>
void main()
{
	char a;
	
	printf("enter a charecter =");
	scanf("%c",&a);
	
	switch(a)
	{
		case 'a':
			{
				printf("charecter is vovel");
				break;
			}
		case 'e':
			{
				printf("charecter is vovel");
				break;
			}
		case 'i':
			{
				printf("charecter is vovel");
				break;
			}
		case 'o':
			{
				printf("charecter is vovel");
				break;
			}
		case 'u':
			{
				printf("charecter is vovel");
				break;
			}				
		case 'A':
			{
				printf("charecter is vovel");
				break;
			}
		case 'E':
			{
				printf("charecter is vovel");
				break;
			}
		case 'I':
			{
				printf("charecter is vovel");
				break;
			}
		case 'O':
			{
				printf("charecter is vovel");
				break;
			}
		case 'U':
			{
				printf("charecter is vovel");
				break;
			}
		
		default:
		printf("charecter is not vovel");
		if(a>='a'&&a<'z')
		{
			printf("\ncharacter is in uppercase=%c",toupper(a));

	    }			
		if(a>='A'&&a<'Z')
		{
			printf("\ncharacter is in lowercase=%c",tolower(a));

	    }						
	}
}
