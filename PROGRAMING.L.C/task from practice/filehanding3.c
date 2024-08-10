#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen ("bca.txt","r");
	
	int num;
	char name[10];
	while(fscanf(fptr,"%d %s",&num,&name)>0)
	{
		printf("%d \t %s\n",num,name);
	}
	fclose(fptr);
}
