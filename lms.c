#include<stdio.h>
int main () {
	int a,b,c=0,i;
	
	scanf("%d",&a);
	
  while(a!=0)
  {
  	b=a%10;
  	c=a+( b*b );
  	a=a/10;
  }
	printf("%d",c);

	
	
}
