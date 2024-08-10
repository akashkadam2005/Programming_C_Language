#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("file name.txt","w");
	if(! fptr)
	{
		printf("file not opening");
	}
	else
	{
		printf("file crated sucsessfuly");
	}
	fclose(fptr);
}
