#include<stdio.h>
int main () {
	int b,c,d,a[b],i,j;
	
	printf("Enter a number of test cases :");
	scanf("%d",&b);
	
	for(i=0;i<b;i++)
	{
		printf("Enter a income of  chefs :");
		scanf("%d",&c);
		
		if(c>100)
		{
			c=c-10;
		}
		
		else
		{
			c=c;
		}
		
		a[i]=c;
	}
	
     for(j=0;j<b;j++)
     {
     	printf("The chefs income  is :%d \n",a[j]);
     	
     	
	 }
	
	
	
}
