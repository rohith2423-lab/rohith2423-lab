#include<stdio.h>
int main () {
	int a[5]={1,3,2,4,5};
	int *p=&a[0];
	
	printf("Value is:%d\n",*p);
	printf("adress is:%u",p);
	p=p+2;
	*p=34;  
	printf("value is:%d",*p);
	
	
} 
