/*
 * hairetu_10.c
 *
 *  Created on: 2021/10/28
 *      Author: h30m21
 */


#include<stdio.h>

int main(void){

	int x[6][7], i,j,val = 1;

	for(i = 0; i < 6; i++)

		for(j = 0; j < 7; j++)

		x[i][j] = val++;

	for(i = 0; i < 6; i++){

		for(j = 0; j < 7; j++)
			printf("%3d",x[i][j]);
		printf("\n");
	}

	printf("%d‚Å‚·",&val);
	return 0;
}
