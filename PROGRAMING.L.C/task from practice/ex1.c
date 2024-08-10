#include<stdio.h>
struct student
{
	int rno,marks[10],total;
	char name[10];
}s[10];
int main()
{
	int i,j,limit;

	printf("\nHow many records you want=");
	scanf("%d",&limit);
	for(i=0;i<limit;i++)
	{
		s[i].total=0;
		printf("\n\nEnetr Roll Number=");
		scanf("%d",&s[i].rno);
		printf("\nEnter Name=");
		scanf("%s",&s[i].name);
		printf("\nEnter 3 subject marks");
		for(j=1;j<=3;j++)
		{
			printf("\n Enter %d subject marks=",j);
			scanf("%d",&s[i].marks[j]);
			s[i].total=s[i].total+s[i].marks[j];
		}
	}
	printf("\nRno\tName\tMS1\tMs2\tMs3\tTotal Marks");
	for(i=0;i<limit;i++)
	{
		printf("\n%d\t%s",s[i].rno,s[i].name);
		for(j=1;j<=3;j++)
		{
			printf("\t%d",s[i].marks[j]);
		}
		printf("\t%d",s[i].total);
	}
}


