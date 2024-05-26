#include <stdio.h>
#include <stdlib.h>

//finding the greatest element in array, dynamic, pointer

int main(){
	
	int a, *p, i, big;
	
	printf("Please enter the number of elements in your array:");
	scanf("%d",&a);
	
	p=(int *)malloc(a*sizeof(int));
	
	for(i=0; i<a; i++){
		printf("Please enter the %d. element of your array:",i+1);
		scanf("%d",p+i);
	}
	
	big=*p;
	
	for(i=1;i<a;i++){
		if(big<*(p+i)) big=*(p+i);
	}
	
	printf("%d",big);
	
	return 0;
}
