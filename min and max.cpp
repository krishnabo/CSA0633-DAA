#include<stdio.h>
int main()
{
	int a[100],i,n,max,min;
	printf("Enter the no.of elements:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("Maximum = %d\n",max);
	printf("minimum = %d",min);
}
