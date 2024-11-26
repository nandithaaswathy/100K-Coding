/*
 ============================================================================
 Name        : elseifladder.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,value,result;
	setbuf(stdout,NULL);
	printf("enter 2 numbers");
	scanf("%d%d",&num1,&num2);
	printf("1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\nplease select your choice");
	scanf("%d",&value);
	if(value==1){
		result=num1+num2;
		printf("result is %d",result);
	}else if(value==2){
		result=num1-num2;
		printf("result is %d",result);
	}else if(value==3){
		result=num1*num2;
		printf("result is %d",result);
	}else if(value==4){
		result=num1/num2;
		printf("result is %d",result);
	}else{
		printf("you are a fool!!!");
	}

	return EXIT_SUCCESS;
}
