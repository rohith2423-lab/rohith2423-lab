#include<stdio.h>
int main () {
    int a,c=1,i;
    
    printf("Enter a number :");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
        c=c*i;
    }
    
    printf("%d %d",a,c);
    
    
    
}


      
