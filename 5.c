#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tekcift(int sayi,int *t,char *c){
	int temp=sayi;
	while(temp!=0){
		if((temp%10)%2!=0){
			*t=temp%10;
			t++;
		}
		else{
			if((temp%10)==0) *c='0';
			else if((temp%10)==2) *c='2';
			else if((temp%10)==4) *c='4';
			else if((temp%10)==6) *c='6';
			else if((temp%10)==8) *c='8';
			c++;
		}
		temp=temp/10;
	}
}

void printtekarr(int *t){
	int *p=*t;
	while(*p){
		printf("%d\n",*p);
		p++;
	}
}

void printciftarr(char *c){
	int *q=*c;
	while(*q){
		printf("%c\n",*q);
		q++;
	}
}

int main(){
	int no, temp, digit=0, *t;
	char *c;
	printf("Enter your student number:");
	scanf("%d",&no);
	temp=no;
	while(temp!=0){
		digit++;
		temp=temp/10;
	}
	t=(int *)malloc(digit*sizeof(int));
	c=(char *)malloc(digit*sizeof(char));
	tekcift(no, *t, *c);
	printtekarr;
	printf("\n");
	printciftarr;
	
	return 0;
}
