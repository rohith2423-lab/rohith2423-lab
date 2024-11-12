#include<stdio.h>
main () { 
char ch;
	printf("Enter a chater :");
	scanf("%c",&ch);
	
	if ( (ch>='A')  &&  (ch<='Z') ) 
	{ 
	if( (ch=='A','E','I','O','U')   ||  (ch=='a','e','i','o','u') )
	printf("%c is an alphabet ",ch);
	printf("%c is an vowle :");
    }
	
	else if ( (ch>='a')  &&  (ch<='z') ) 
	{
	printf("%c is an alphabet",ch);
	printf("%c is an vowle :");
    }
	
	else{
		printf("%c is not an vowle");
	}

}
