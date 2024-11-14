#include<stdio.h>
main () { 
char ch;
	printf("Enter a chater :");
	scanf("%c",&ch);
	
	if ( (ch>='A')  &&  (ch<='Z') ) {
	if( (ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U') ){
	printf("%c is an alphabet",ch);
	printf("\n%c is an vowle :",ch); 
}
else{
	printf("%c is an alphabet",ch);
	printf("\n%c is not an vowle :",ch);
}
 
}
	else if ( (ch>='a')  &&  (ch<='z') )
	 	{ if( (ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u') ) {
	printf("%c is an alphabet",ch);
	printf("\n%c is an vowle :",ch); 
}
else{
	printf("%c is an alphabet",ch);
	printf("\n%c is consonant :",ch);
}
 
}

	else{
		printf("%c is consonant",ch);
	}

}
