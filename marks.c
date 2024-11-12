#include<stdio.h>
int main () {
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	
	
	if(a>90)
	printf("Result = Passed , Grade = A");
	
	else if(a>70)
	printf("Result = Passed , Grade = B");
	
    else if(a>50)
	printf("Result = Passed , Grade = C");
	
    else if(a>35)
	printf("Result = Passed , Grade = D");
	
	else 
	printf("Result = Fali , Grade = F");
	
	
}
