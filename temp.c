#include <stdio.h>
int main ()  {
	int a,b,temp;
	
	printf("enter a number ;");
	scanf("%d",&a);
	
	printf("enter a number ;");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("%d \n",a);
	printf("%d \n",b);
	
}
