#include<stdio.h>
int main()
{
	int a,b,c=0,x;
	
	printf("Enter a Number : ");
	scanf("%d",&a);
	
	x=a;
	
	while(a!=0)
	{
		b=a%10;
		c=c+b;
		a=a/10;
	}
	printf("The Sum of Digits of the Number %d",c);
}
