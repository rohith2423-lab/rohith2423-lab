#include<stdio.h>
void factorial();
main()
{
	int a,i=1,c;

	printf("Enter a Number : ");
	scanf("%d",&a);

}
void factorial(a,i,c)
{
	while(i<=a)
	{
		c=c*i;
		i++;
	}

	printf("Factorial of %d is %d.",a,c);
}