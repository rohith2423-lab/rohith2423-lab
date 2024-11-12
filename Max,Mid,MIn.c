#include<stdio.h>
int main () {
	int a,b,c,max,mid,min;
	
	printf("Enter a number :");
	scanf("%d %d %d",&a,&b,&c);
	
	( (a>b) && (a>c))? (max=a): (a=a);
	( (b>a) && (b>c))? (max=b): (a=a);
	( (c>b) && (c>a))? (max=c): (a=a);
	
	
	( (a<b) && (a<c))? (min=a): (a=a);
	( (b<a) && (b<c))? (min=b): (a=a);
	( (c<b) && (c<a))? (min=c): (a=a);
	
	( (a<max) && (a>min))? (mid=a): (a=a);
	( (b<max) && (b>min))? (mid=b): (a=a);
	( (c<max) && (c>min))? (mid=c): (a=a);
	
	printf("Increasing %d %d %d \n",max,mid,min);
	printf("Drecreasing %d %d %d",min,mid,max);
	
	
	
}
