#include<stdio.h>
int main () {
	int i=1,j,k,a,b;
	
	printf("Enter a number of rows:");
	scanf("%d",&a);
	
	printf("Enter a number of colums:");
	scanf("%d",&b);
	
	for(i=1;i<=a;i++)
	{
		printf("\n");
		
		for(j=1;j<=i;j++)
		{
			for(k=1;k<=i;k++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	
}
