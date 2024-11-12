#include<stdio.h>
#include<math.h>
int main () {
	int i,a,j,k;
	
	printf("Enter a number:");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			for(k=1;k<=j;k++)
			{
				printf("%d",a);
				pow(j,i);
			}
			printf("\n");
		}
		
	}
	
	
	
}
