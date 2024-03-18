#include<stdio.h>
int main(){
	int a[100],i,n,low,high,mid,se,found=0;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter search element:");
	scanf("%d",&se);
	low=0;
	high=n-1;
	while(low<=high){
		mid=(low+high)/2;
		if(se==a[mid]){
			printf("Element is found at position : %d",mid);
			found=1;
			break;
		}
		else if(se<a[mid]){
			high=mid-1;
		}
		else if(se>a[mid]){
			low=mid+1;
		}
	}
	if(found==0){
		printf("Search element not found");
	}
}


