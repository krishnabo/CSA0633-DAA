#include<stdio.h>
int gcd(int n1,int n2){
	if(n2!=0){
		return gcd(n2,n1%n2);
	}
	else{
		return n1;
	}
}
int main(){
	int n1,n2;
	printf("Enter two numbers:");
	scanf("%d%d",&n1,&n2);
	int result = gcd(n1,n2);
	printf("GCD of %d and %d is %d\n",n1,n2,result);
}
