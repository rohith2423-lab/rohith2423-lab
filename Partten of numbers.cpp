#include<stdio.h>
main () {
	int a,j,i,b=1;
	
	printf("Enter number of rows :");
	scanf("%d",&a);
	
	for(j=1;j<=a;j++)
	{
		for(i=1;i<=j;i++)
		{
	    printf("%d\t",b);
	    b++;
        }
     	
     	printf("\n");
	}
	
	
}