/*
 ============================================================================
 Name        : forloop-evennumbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit=10,i;
	setbuf(stdout,NULL);
	for(i=2;i<=limit;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
	return EXIT_SUCCESS;
}
