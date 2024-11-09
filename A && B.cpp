#include<stdio.h>
int main () {
	int a,b,c;
	
	printf("Enter a number :");
	scanf("%d",&a);
	
	printf("Enter a number :");
	scanf("%d",&b);
	
	c=(a&b);
	printf("%d",c);
	//if both are true is 1 else 0
	//10 24

    //16 8 4 2 1

  //0 1 0 1 0
  //1 1 0 0 0
  //0 1 0 0 0
	
}
