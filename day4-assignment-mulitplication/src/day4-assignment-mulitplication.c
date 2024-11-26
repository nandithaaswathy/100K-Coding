/*
 ============================================================================
 Name        : day4-assignment-mulitplication.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i,product;
	setbuf(stdout,NULL);
	printf("enter a number");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		product=i*num;
		printf("%d*%d=%d\n",i,num,product);
	}
	return EXIT_SUCCESS;
}
