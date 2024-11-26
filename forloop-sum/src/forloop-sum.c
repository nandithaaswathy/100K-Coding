/*
 ============================================================================
 Name        : forloop-sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int value,i,sum=0;
	setbuf(stdout,NULL);
	printf("enter a value");
	scanf("%d",&value);

	for(i=1;i<=value;i++){
		sum=sum+i;
	}
	printf("%d",sum);
	return EXIT_SUCCESS;
}
