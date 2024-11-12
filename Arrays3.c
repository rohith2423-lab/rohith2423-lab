#include<stdio.h>
int main()
{
	int n,a[n],i,j,c,count=0;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	printf("\nEnter the elements of array : \n");
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
		{
		 	for(j=0;j<n;j++)
		 	{
		 		if(a[i]==a[j])
		 		{
		 		count++;
		 		
				 }
			 }
	}
	
	count=count-n;
	count=count/2;
	
printf("%d",count);
}
