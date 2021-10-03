/*
 * rensyu.c
 *
 *  Created on: 2021/10/01
 *      Author: h30m21 ‚Vì°óBà€
 */


#include <stdio.h>

int main(void){

	double r=4.0, x, y;

	printf("Input x,y");
	scanf("%lf,%lf",&x,&y);

	if(r*r < x*x + y*y)

		printf("â~ÇÃäOë§Ç≈Ç∑ÅB\n");

		else

		printf("â~ÇÃì‡ë§Ç≈Ç∑ÅB\n");

	return 0;
}


/*S:\èÓïÒèàóùáU\rensyu\Debug>rensyu.exe
Input x,y 0.5,0.5
â~ÇÃäOë§Ç≈Ç∑ÅB

S:\èÓïÒèàóùáU\rensyu\Debug>rensyu.exe
Input x,y 5.0,4.0
â~ÇÃì‡ë§Ç≈Ç∑ÅB*/
