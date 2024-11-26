/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,sum=0,i;
	setbuf(stdout,NULL);
	printf("enter a number");
	scanf("%d",&limit);
	for(i=1;i<=limit;i+2){
		sum=sum+i;
		printf("sum of odd numbers is %d",sum);
	}
	return EXIT_SUCCESS;
}
