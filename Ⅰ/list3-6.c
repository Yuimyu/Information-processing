/*
 * list3-6.c
 *
 *  Created on: 2020/11/06
 *      Author: h30m21
 */


#include <stdio.h>

int main(void)

{
	int i,total=0;

	for (i=1; i<=10000; i++)
		total+=i;

	printf("total=%d\n",total);

	return 0;
}
