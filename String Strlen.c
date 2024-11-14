#include<stdio.h>
int main () {
	int i, count=0;
	char name[100];
	
	printf("Enter a name:");
	gets(name);
	
//	count=strlen(name);
//	printf("Steing length is=%d",count);
	
	while(name[i] !='\0')
	{
		count++;
		i++;
	}
	printf("%d",count);
	
	
	
}
