/*
 * rensyu.c
 *
 *  Created on: 2021/10/01
 *      Author: h30m21 āV”BŪ
 */


#include <stdio.h>

int main(void){

	double r=4.0, x, y;

	printf("Input x,y");
	scanf("%lf,%lf",&x,&y);

	if(r*r < x*x + y*y)

		printf("~ĢO¤Å·B\n");

		else

		printf("~Ģą¤Å·B\n");

	return 0;
}


/*S:\īńU\rensyu\Debug>rensyu.exe
Input x,y 0.5,0.5
~ĢO¤Å·B

S:\īńU\rensyu\Debug>rensyu.exe
Input x,y 5.0,4.0
~Ģą¤Å·B*/
