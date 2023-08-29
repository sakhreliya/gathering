#include<stdio.h>
int fact(int n)
{
	int factorial=0;
	if(n<=1)
	{
		return 1;
	}
	else
	{
		factorial=n*fact(n-1);
		return factorial;
	}
}

main()
{
	int a,ans;
	printf("Enter value:");
	scanf("%d",&a);
	ans=fact(a);
	printf("Factorial of %d = %d",a,ans);
	
}
