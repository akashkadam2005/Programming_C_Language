#include<stdio.h>
int main()
{
	FILE *akash;
	akash=fopen("file name.txt","w");
	if(! akash)
	{
		pritnf("file not opening");
	}
	else
	{
		printf("file crated sucsessfuly");
	}
	fclose(akash);
}
