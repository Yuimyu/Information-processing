/*
 * kuku.c
 *
 *  Created on: 2020/11/12
 *      Author: h30m21
 */


#include <stdio.h>

int main(void)

{
	int j,k;

	printf("‹ã‹ã‚Ì•\\\n");

	for (j=1; j<14; j++)
	{
		for (k=1; k<14; k++)
		{
			printf("%4d",j*k);
		}
		printf("\n");

	}

	return 0;
}
