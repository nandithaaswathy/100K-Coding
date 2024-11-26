/*
 ============================================================================
 Name        : assignment-markgrade.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float totalmark;
	setbuf(stdout,NULL);
	printf("enter your total mark");
	scanf("%f",&totalmark);

	if(totalmark>=90){
		printf("A grade");
	}else if(totalmark>=80&&totalmark<=89){
		printf("B grade");
	}else if(totalmark>=70&&totalmark<=79){
		printf("C grade");
	}else if(totalmark>=60&&totalmark<=69){
		printf("D grade");
	}else if(totalmark>=50&&totalmark<=59){
		printf("E grade");
	}else if(totalmark<50){
		printf("FAILED");
	}
	return EXIT_SUCCESS;
}
