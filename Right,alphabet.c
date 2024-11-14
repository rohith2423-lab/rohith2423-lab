#include<stdio.h>
main () {
	char ch;
	printf("Enter a alphabet ;");
	scanf("%c",&ch);
	
	if( (ch>='A')  &&  (ch<='Z') ) {
	printf("%c ia a uppercase alphabrt",ch);
}
	
	else if( (ch>='a')  &&  (ch<='z') ) {
		printf("%c is a lowercase",ch);
	}
	
	else {
		printf("%c is not an alphabet",ch);
	}
	
	
	
	
}
