#include<stdio.h>
int main () { 
    int a,b,c;
    printf("Enter a number :");
    scanf("%d %d %d,&a ,&b ,&c");
    
    if(a>b  && a>c) {
        printf("%d is the largest",&a);
        
    }
    else if(b>a  && b>c) {
        printf("%d is the largest",&b);
    }
    else {
        printf("%d is the largest",&c);
    }
return 0;
}
