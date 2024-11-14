#include<stdio.h>
int main () {
	int a,b,s=13,i=0,j,c[s];
	printf("Enter a number :");
	scanf("%d",&a);
	
	while(i<s)
	{
		b=a%2;
		a=a/2;
		c[i]=b;
		i++;	
	}
	
	for(j=s;j>=0;j--)
	{
	printf("%d",c[j]);	
	}
	
	//Enter the only Odd numbers
	
	
	
	
}
