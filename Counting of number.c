#include<stdio.h>
int main () {
    int a,count;
    
    printf("Enter a number :");
    scanf("%d",&a);
    
  do 
  {
     a=a/10;
     count++;
  }
    while(a>0);
    printf("%d \n",count);
  }
      
