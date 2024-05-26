#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	int i=0, j=0;
	char *p, *q, s1[100], s2[100];
	printf("Write something:");
	gets(s1);
	p=s1;
	printf("Write something:");
	gets(s2);
	q=s2;
    while(*p)
       p++;
    while(*q)
       *p++ = *q++;
    *p = '\0';
	printf("%s",s1);
	return 0;
}
