#include<stdio.h>
int main()
{
	int i,n,c,a[100],e;
	printf("Enter the no of elements in an array:");
	scanf("%d",&e);
	printf("Enter the elements:\n");
	for(i=0;i<e;i++){
		scanf("%d",a[i]);
	}
	printf("enter a capacity:");
	scanf("%d",&c);
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		c=c-a[i];
		printf("%d is the left capacity",c);
	}
	return 0;
}





