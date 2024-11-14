#include<stdio.h>
int main () 
{
	int a,b,c,temp;
	
	printf("Enter a tempeture:");
	scanf("%d %d %d",&a,&b,&c);
	
	if(temp<=100 || temp>400)
	{
		printf("increasing");
	}
	else if(temp<=8000 || temp>10000)
	{
		printf("Nither increasing or decring order");
	}
	else
	{
		printf("decreasing");
	}
	
}
