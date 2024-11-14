#include<stdio.h>
int main () {
	int a,b,c,d;
	
	printf("Enter time in hours and minutes:");
	scanf("%d %d",&a,&b);
	
	c=(a*60)+b;
	d=(c*60);
	
	printf("%d  \n",c);
	printf("%d",d);
	
	
	
}
