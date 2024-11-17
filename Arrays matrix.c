#include<stdio.h>
int main () 
{
	int a[3][3],i,j;
	
	printf("Enter the elements of matrix :");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	printf("The matrix :");
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
}
