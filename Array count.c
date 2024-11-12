#include<stdio.h>
int main()
{
	int n,a[n],i,c=0;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	printf("\nEnter the elements of array : \n");
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<n;i++)
	{
		if (a[i]%2==0)
		{
			c++;
		}
	}
	
	printf("The number of even elements in the Array : %d\n",c);
	printf("The number of odd elements in the Array : %d",(n-c));
	
	return 0;
	
}
