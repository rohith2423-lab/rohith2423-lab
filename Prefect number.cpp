#include<stdio.h>
int main () {
	int a,i,sum=0;
	
	printf("Enter a number :");
	scanf("%d",&a);
	
	for(i=1;i<a;i++)
	{
		if(a%i==0) 
		sum=sum+i;	   
	}
	
	if(sum==a) {
	printf("it is prefect number ");
     }
	
	else
	{
		printf("it is not prefect number ");
	}
	
}
