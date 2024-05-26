#include <stdio.h>
#include <stdlib.h>

int length(char *ptr){                                     //strlen fonksiyonu
	int len=0;
	while(*ptr++) len++;
	return len;
}

int main(){
	char *son, *p1, *text=(char *)malloc(100*sizeof(char));
	int l;
	printf("Enter text:");
	gets(text);
	l=length(text);
	son=text+l-1;
	p1=son;
	while(p1>text){
		char *p2;
		p2=p1;
		while(*p2!=' '&&p2!=text) p2--;
		while(p2<p1){
			if(*p2!=32)
			  printf("%c",*p2);
			p2++;
		}
		printf(" ");
		while(*p1!=' '&&p1!=text) p1--;
	}
	return 0;
}
