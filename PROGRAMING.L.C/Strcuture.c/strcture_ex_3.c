#include<stdio.h>
struct num
{
	char a[10];
	int b;
	int c;
}n[10];
void main()
{
//	struct num n;
int i;
{
	for(i=0;i<3;i++)
{
	printf("enter name =");
	scanf("%s",& n[i].a);
	printf("enter mark =");
	scanf("%d",& n[i].b);
	printf("enter class =");
	scanf("%d",&n[i].c);
}
printf("\n\tname \tmark \tclass \n");
	for(i=0;i<3;i++)
	{
	printf("\t %s",n[i].a);
	printf("\t %d",n[i].b);
	printf("\t %d",n[i].c);
	printf("\n");
}
}
}
