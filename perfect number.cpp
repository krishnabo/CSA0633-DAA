#include<stdio.h>  
#include<conio.h>  
int main()  
{  
int num, rem, sum = 0, i;  
printf("Enter a number\n");  
scanf("%d", &num);      
for(i = 1; i < num; i++)  
    {  
        rem = num % i;  
        if (rem == 0)  
        {  
            sum = sum + i;  
        }  
    }  
if (sum == num)  
    printf("Perfect Number");  
else  
    printf("not a Perfect Number");  
return 0; 
}



