#include<stdio.h>
int leapyear() ;
	main()
	{
		int year;
		printf("Enter a year:");
		scanf("%d",&year);
		leapyear(year);
	}
int leapyear(year)
    {
	if(year%400==0) 
	{
	printf("it is leapyear");
    }
	else if( (year%100!=0 ) &&  (year%4==0 ) ) 
	{
 	printf("it is leapyear");
    }
	else
	{	
	printf("it is not leapyear");
	}

 (year%400==0)? printf("it is leapyear") :( ( (year%100!=0 ) &&  (year%4==0 ) ) ?  printf("it is leapyear"): printf("it is not leapyear") );

    }



 
