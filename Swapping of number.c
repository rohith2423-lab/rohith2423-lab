// Swapping of Numbers using function and Bitwise operator
#include<stdio.h>
int swappingnumber();
int main ()
 {
	int a,b;
	
	printf("Enter a number :");
	scanf("%d",&a);
	
	printf("Enter a number :");
	scanf("%d",&b);
	swappingnumber(a,b);
}

swappingnumber(a,b) {

	
	a=a^b;
	b=a^b;
	a=a^b;
	
	printf("%d \n",a);
	printf("%d",b);
	
}
	
	
	

