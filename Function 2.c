#include<stdio.h>
int greatherofthreenumber();
main()
{
	int a,b,c;
	printf("enter a number of A,B,C");
	scanf("%d %d %d",&a,&b,&c);
	greatherofthreenumber(a,b,c);	
}
int greatherofthreenumber(a,b,c)
{
	if( (a>b) && (a>c) )
	printf("%d is greatest",a);
	
	else if( (b>a)  &&   (b>c) )
	printf("%d is greatest",b);
	
	
	else
	printf("%d is greatest",c);
	
}

