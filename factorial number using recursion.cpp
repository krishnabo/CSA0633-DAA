#include<stdio.h>
int fact(int n)
{
	if(n==0)
		return 1;
    else
		return(n*fact(n-1));
}
int main()
{
	int result,n;
	printf("Enter the number:");
	scanf("%d",&n);
	result=fact(n);
	printf("Factorial = %d",result);
	return 0;
}

