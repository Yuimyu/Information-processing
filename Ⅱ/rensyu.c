/*
 * rensyu.c
 *
 *  Created on: 2021/10/01
 *      Author: h30m21 �V���B��
 */


#include <stdio.h>

int main(void){

	double r=4.0, x, y;

	printf("Input x,y");
	scanf("%lf,%lf",&x,&y);

	if(r*r < x*x + y*y)

		printf("�~�̊O���ł��B\n");

		else

		printf("�~�̓����ł��B\n");

	return 0;
}


/*S:\��񏈗��U\rensyu\Debug>rensyu.exe
Input x,y 0.5,0.5
�~�̊O���ł��B

S:\��񏈗��U\rensyu\Debug>rensyu.exe
Input x,y 5.0,4.0
�~�̓����ł��B*/
