#include<stdio.h>
int main () {
    int a[5],i;
    printf("Enter the number :");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<5;i++);
    printf("\narrays of element at index %d is :%d",i,a[i]);
    
}
