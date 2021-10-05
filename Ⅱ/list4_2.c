/*
 * list4_2.c
 *
 *  Created on: 2021/10/04
 *      Author: h30m21 M4-24 âV“¡—BˆÛ
 */

#include<stdio.h>

void exchange(void);

int main(void){

	exchange();

	return 0;

}


void exchange(void){

	int x, y, z;

	printf("please input date : x =");
	scanf("%d",&x);
	printf("please input date : y =");
	scanf("%d",&y);

	if(x > y){

		z = x;
		x = y;
		y = z;
	}

	printf("x=%d, y=%d\n",x,y);
}
