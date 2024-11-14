#include<stdio.h>
int main () {
	int a,b,g,s,c;
	printf("Enter a numbers of medles:");
	scanf("%d %d %d",&g,&s,&b);
	
	a=g%5+s%5+b%5;
//	c=15-a;
	
	printf("%d",a);
	
}
