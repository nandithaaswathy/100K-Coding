/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,arr[100],i;
	setbuf(stdout,NULL);
	printf("enter array limit");
	scanf("%d",&limit);
	printf("enter numbers");
	for(i=0;i<limit;i++){
		scanf("%d",&arr[i]);
	}
	printf("entered numbers are");
	for(i=0;i<limit;i++){
		printf("%d\t",arr[i]);
	}
	return EXIT_SUCCESS;
}
