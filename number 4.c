#include<stdio.h>
main()
{
	int i,j,a,p=1;
	
	printf("Enter the number of rows : ");
	scanf("%d",&a);
	
	for (i=1;i<=a;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%d ",p);
			p++;
		}
		printf("\n");
	}
}
