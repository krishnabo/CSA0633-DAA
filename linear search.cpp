#include <stdio.h> 
int main() 
{ 
   int a[100],i,n,se,found=0; 
   printf("enter size of array"); 
   scanf("%d",&n); 
   printf("enter elements: "); 
   for(i=0;i<n;i++) 
   { 
    scanf("%d",&a[i]); 
   } 
   printf("enter serach element"); 
   scanf("%d",&se); 
   for(i=0;i<n;i++) 
   {    
    if(a[i]==se) 
    { 
     printf("search element found in location %d",i); 
     found=1; 
     break; 
    } 
   } 
   if(found==0) 
   { 
    printf("element not found"); 
   } 
   return 0; 
}

