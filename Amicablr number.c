#include<stdio.h>
int main () {
	int a,b,i,j,sum1=0,sum2=0,count;
	
	for(a=100;a<=1000;a++)
	{
		for(b=100;b<=1000;b++)
		{
			for(i=1;i<a/2;i++)
			{
				if(a%i==0)
				{
					sum1=sum1++;
				}
				for(j=1;j<b/2;j++)
				{
					if(b%j==0)
					{
						sum2=sum2+j;
					}
					if( (sum1==b)  &&  (sum2==a) )
					{
						count=count+1;
						printf("%d",a);
						printf("%d",b);
			    	}
					sum1=0;
					sum2=0;
				}
			}
		}
	}
	printf("%d",count);
}
