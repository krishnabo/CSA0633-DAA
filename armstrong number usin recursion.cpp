#include<stdio.h>
#include<math.h>
int check_AN(int num){
	if(num>0){
		return (pow(num%10,3)+check_AN(num/10));
	}
}
int main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(check_AN(num)==num){
		printf("Armstrong number");
	}
	else{
		printf("Not Armstron number");
	}
}
