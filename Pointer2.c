#include<stdio.h>
main()
{
	int a[7]={1,5,3,8,-4,6,3};
	int *p;
	
	p=&a[4];
	
	//p=p+2;
	//p=p-2;
	
	printf("%d",*p);
}
