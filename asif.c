#include<stdio.h>
int main () {
	int A,B,a,b,c,d,e,f,max,min,mid,i,j;
	
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
	
	{
	   i=max+mid;
	   
	printf("%d",i);
    }
    {
    	printf("\n");
	}
    printf("Enter a number :");
	scanf("%d %d %d",&d,&e,&f);
	
	( (d>e) && (d>f))? (max=d): (a=a);
	( (e>d) && (e>f))? (max=e): (a=a);
	( (f>e) && (f>d))? (max=f): (a=a);
	
	( (d<e) && (d<f))? (min=d): (a=a);
	( (e<d) && (e<f))? (min=e): (a=a);
	( (f<e) && (f<d))? (min=f): (a=a);
	
	( (d<max) && (d>min))? (mid=d): (a=a);
	( (e<max) && (e>min))? (mid=e): (a=a);
	( (f<max) && (f>min))? (mid=f): (a=a);
	
	{
	   j=max+mid;
	   `
	   printf("%d",j);
    }
    
    {
    if(i>j)
    {
    	printf("\nA won the match");
	}
	else
	{
		printf("\nB won the match");
	}
}

}
