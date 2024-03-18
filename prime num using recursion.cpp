#include<stdio.h>
int is_prime(int i,int n)
{
	if(n==i)
	return 0;
	else if(n%i==0)
	return 1;
	else
	return is_prime(i+1,n);
}
int main()
{
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	if(is_prime(2,n)==0)
	printf("prime number");
	else
	printf("not prime number");
	return 0;
}




