#include<stdio.h>
void checkevenodd ();
int main () {
	
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	checkevenodd(num);
}

void checkevenodd(int num)
	{
		if(num%2==0)
		printf("it is even");
		
		else
		printf("it is odd");
	}
	
	
	
	
	
	
