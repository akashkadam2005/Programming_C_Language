#include<stdio.h>
void main()
{
	int a[10];
	int i,m,mn,s=3;
	

    
    printf("Enter elements in the array: ");
    for(i=0; i<s; i++)
    {
    	scanf("%d",&a[i]);
	}
	m = a[0];
    mn = a[0];
    for(i=1; i<s;i++)
    {
    	if(a[i]>m)
        {
            m=a[i];
        }
        if(a[i]<mn)
        {
            mn=a[i];
        }
	}
	printf("Maximum element is= %d\n", m);
    printf("Minimum element is= %d", mn);
    {
    	printf("\n ");
	}
}
