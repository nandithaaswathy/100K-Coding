/*
 ============================================================================
 Name        : assignment-week.c
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
	printf("1 for sunday\n2 for monday\n3 for tuesday\n4 for wednesday\n5 for thursday\n6 for friday\n7 for saturday\nplease select your choice");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("you have selected sunday");
    break;
	case 2:
		printf("you have selected monday");
	break;
	case 3:
		printf("you have selected tuesday");
	break;
	case 4:
		printf("you have selected wednesday");
    break;
	case 5:
		printf("you have selected thursday");
	break;
	case 6:
		printf("you have selected friday");
	break;
	case 7:
		printf("you have selected saturday");
	break;
	default:
	    printf("INVALID ENTRY");
	}
	return EXIT_SUCCESS;
}
