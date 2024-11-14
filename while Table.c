#include<stdio.h>
 void number();
 int main () 

{
	int a,i=1,c;
	printf("Enter a number :");
	scanf("%d",&a);
	number(a,i,c);
}
  void number(a,i,c)
   {
	while(i<=10)
	{
		c=a*i;
		printf("%d*%d=%d \n",a,i,c);
		i++;
	 }
}
	
	
	
