#include<stdio.h>
int main () {
    int a,i,sum;
    printf("Enter a number :");
    scanf("%d",&a);
    
    for(i=0;i<=10;i++)
    { sum=a*i;
        printf("%d*%d=%d\n",a,i ,sum);
    }
    return 0;
}
