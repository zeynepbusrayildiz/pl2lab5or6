#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int namel, lastl, fulll; //name length, last name length, full length
	char a[20], *name, *surname;
	name=(char *)malloc(20*sizeof(char));
	printf("Enter your name:");
	scanf("%s",name);
	namel=strlen(name);
	printf("Enter your surname:");
	scanf("%s",a);
	lastl=strlen(a);
	fulll=namel+lastl+2; // 1 for space and 1 for null
	name=(char *)realloc(name, fulll*sizeof(char));
	strcat(name," ");
	strcat(name,a);
	printf("Full name: %s",name);
	
	return 0;
}
