#include<stdio.h>
int main () {
	int a,b;
	printf("Enter a favorite number :");
	scanf("%d",&a);
	
	if(a%7==0  && a%2==0)
	{
		printf("Alice take the number");
		}	
	else if(a%9==0 &&   a%2!=0 )
	{
		printf("Bob taken the number");
	}
	else{
			printf("Charile taken the number");
	}
	
	
	
	
	
	
}
