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

	printf("��������");
	scanf("%d",&year);

	if((year%4==0 &&year%100!=0)||(year%400==0))
	{
		printf("���邤�N�ł�\n");
	}

	else
	{
		printf("���邤�N�ł͂Ȃ��ł�\n");
	}

	return 0;
}
