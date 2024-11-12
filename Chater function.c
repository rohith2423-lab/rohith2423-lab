//Given charater is alphbet 
#include<stdio.h>
char alphbet() ;
main () {
	char ch;
	printf("Enter a charater :");
	scanf("%c",&ch);
	alphbet(ch) ;
}
char alphbet(ch)
{
	( ( (ch>='a') && (ch<='z') ) || ( (ch>='A') && (ch<='Z') ) ) ? printf("it is charater"):printf("it is not charater");
} 




