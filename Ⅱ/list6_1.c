/*
 * list6_1.c
 *
 *  Created on: 2021/10/18
 *      Author: h30m21 M4-24Å@‚Vì°óBà€
 */

#include<stdio.h>

int main(void){

	int i;
	double height[5] = {160.0, 170.0, 146.7, 180.5, 180.0};
	double total = 0.0;

	for(i = 0; i < 5; i++){

		total += height[i];
	}

	printf("average = %.2lf\n",total / 5);

	return 0;
}
