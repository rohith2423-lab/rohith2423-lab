#include<stdio.h>
int main () {
	int a,j,i,k;
	
	printf("Enter number of rows :");
	scanf("%d",&a);
	
	for(j=1;j<=a;j++)
	{
		for(k=1;k<=(a-j);k++)
		{
			printf(" ");
		}
		for(i=1;i<=(j*2-1);i++)
		{
		printf("*");
     	}
     	
     	printf("\n");
	}
	
	
}
