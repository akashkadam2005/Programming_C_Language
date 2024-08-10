#include<stdio.h>
int main()
{
	FILE *akash;
	akash=fopen ("L1.txt","a+");
   if(!akash)
   {
   	printf("file is not crated.....");
   }
   else
   {
   	printf("file is crated sucessfuly....");
   }
   char name[100]={"my name is akash"};
   	fprintf(akash,"\n%s",name);
	fclose(akash);
}
