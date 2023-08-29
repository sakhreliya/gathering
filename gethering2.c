#include <stdio.h>
 
int sumofarray(int a[],int n,int i)
{
 	   if(i<n)
		{
		return a[i]+sumofarray(a,n,++i);
	   	}
        return 0;
}
 
int main()
{
    int a[1000],i,n,sum;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    sum=sumofarray(a,n,0);
    printf("sum of array is :%d",sum);
 
}
