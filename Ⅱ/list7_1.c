/*
 * list7_1.c
 *
 *  Created on: 2021/11/04
 *      Author: h30m21 M4-24 âV“¡—BˆÛ
 */


#include<stdio.h>

int main(void){

	int x;
	int *p;

	printf("please input data:");
	scanf("%d",&x);
	p = &x;
	printf(" x = %d\n",x);
	printf(" *p = %d\n",*p);

	printf(" &x = %d\n",&x);
	printf(" p = %d\n",p);
	printf(" &p = %d\n",&p);

	return 0;
}

/*please input data:5
 x = 5
 *p = 5
 &x = 2293372
 p = 2293372
 &p = 2293360
 */
