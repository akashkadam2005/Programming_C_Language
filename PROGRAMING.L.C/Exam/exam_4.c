#include<stdio.h>  
int main()  
{  
    int n, arr[100],rev[100],j=0,i;  
    printf("Enter the size of the array: ");  
    scanf("%d",&n);  
    printf("Enter the elements: "); 
	 
    for(i = 0;i<n;i++)  
    {  
        scanf("%d",&arr[i]);
        
    } 
	  
      
    for(i=n-1;i>=0;i--)  
    {  
        rev[j]=arr[i];  
        j++;  
    }  
     
    printf("The Reversed array: ");  
    for(i=0;i<n;i++)  
    {  
        printf("%d",rev[i]);  
    }  
}
