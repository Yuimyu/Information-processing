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

	printf("¼—ï‚ğ“ü—Í");
	scanf("%d",&year);

	if((year%4==0 &&year%100!=0)||(year%400==0))
	{
		printf("‚¤‚é‚¤”N‚Å‚·\n");
	}

	else
	{
		printf("‚¤‚é‚¤”N‚Å‚Í‚È‚¢‚Å‚·\n");
	}

	return 0;
}
