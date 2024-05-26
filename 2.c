#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int length=12;
	char *p=(char *)malloc(length*sizeof(char));
	strcpy(p,"busra yildiz");
	printf("%s",p);
	return 0;
}
