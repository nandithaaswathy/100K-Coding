/*
 ============================================================================
 Name        : switchsample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);
	printf("1 for biriyani\n2 for mandhi\n3 for porotta\n4 for fried rice\nplease enter your choice");
	scanf("%d",&choice);
	switch(choice){
	case 1:
	    printf("you have selected biriyani");
	    break;
	case 2:
	    printf("you have selected mandhi");
	    break;
	case 3:
	    printf("you have selected porotta");
	    break;
	case 4:
	    printf("you have selected fried rice");
	    break;
	default:
		printf("wrong selection");
	}
	return EXIT_SUCCESS;
}
