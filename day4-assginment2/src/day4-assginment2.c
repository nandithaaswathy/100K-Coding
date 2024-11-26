/*
 ============================================================================
 Name        : day4-assginment2.c
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
	printf("enter limit");
	scanf("%d",&limit);
	for(i=1;i<=limit;i=i+2){
		sum=sum+i;
	}
	printf("sum of odd numbers is %d",sum);
	return EXIT_SUCCESS;
}
