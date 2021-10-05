/*
 * list4_3.c
 *
 *  Created on: 2021/10/04
 *      Author: h30m21
 */


#include<stdio.h>

void exchange(int x, int y);

int main(void){

	int x, y;

	printf("please input date : x =");
	scanf("%d",&x);
	printf("please input date : y =");
	scanf("%d",&y);

	exchange(x, y);

	return 0;

}


void exchange(int x, int y){

	int z;

	if(x > y){

		z = x;
		x = y;
		y = z;
	}

	printf("x=%d, y=%d\n",x,y);
}
