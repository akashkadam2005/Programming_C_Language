#include<stdio.h>
int main()
{
	FILE *xyz;
	xyz=fopen ("bca.txt","a+");
	if(!xyz)
	{
		printf("file not created....");
	}
	else
	{
		printf("file crated sucessfuly...");
	}
	int num=2000;
	char name[10]="dsfgh";
	fprintf(xyz,"\n %d %s",num,name);
	fclose(xyz);
}
