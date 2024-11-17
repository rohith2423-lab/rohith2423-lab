#include<stdio.h>
int main ()
{
	int a[5],i;
	float sum,avg;
	
	printf("Enter a marks:");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
		avg=sum/5;
	}
	
	printf("%f\n",sum);
	printf("%f",avg);
	
	
	
	
}
