/*
 * P67-1.c
 *
 *  Created on: 2020/10/30
 *      Author: h30m21
 */


#include <stdio.h>

int main(void)
{
	int year;

	printf("西暦を入力");
	scanf("%d",&year);

	if((year%4==0 &&year%100!=0)||(year%400==0))
	{
		printf("うるう年です\n");
	}

	else
	{
		printf("うるう年ではないです\n");
	}

	return 0;
}
