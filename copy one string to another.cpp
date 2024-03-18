#include<stdio.h>
#include<string.h>
void copy(char[],char[]);
int main(){
	char str1[20],str2[20];
	printf("Enter the string:");
	scanf("%s",&str1);
	strcpy(str2, str1);
	printf("First string:%s\n",str1);
	printf("Second string:%s",str2);
}
void copy(char str1[],char str2[]){
    strcpy(str2, str1);
}

