/*
 ============================================================================
 Name        : array-searching.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int limit,arr[100],i,searchkey,flag=0;
	setbuf(stdout,NULL);
	printf("enter array limit");
	scanf("%d",&limit);
	printf("enter values");
	for(i=0;i<limit;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter searchkey");
	scanf("%d",&searchkey);
	for(i=0;i<limit;i++){
		if(searchkey==arr[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("value found at the position %d",i+1);
	}else{
		printf("value not found");
	}

	return EXIT_SUCCESS;
}
