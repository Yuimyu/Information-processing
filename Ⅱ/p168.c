/*
 * p168.c
 *
 *  Created on: 2021/11/15
 *      Author: h30m21 M4-24　齋藤唯維
 */

#include<stdio.h>

void main(void)
{
	char str1[100], str2[100];

	void strcopy(char *sp2, char *sp1);

	printf("Plaese Enter a String str1[] :");
	scanf("%s",str1);
	strcopy(str2, str1);
	printf("str1[] = %s\n", str1);
	printf("str1[] = %s\n", str2);
}

void strcopy(char *sp2, char *sp1)
{
	for(;*sp1 != '\0'; sp1++ , sp2++)
	{
		*sp2 = *sp1;     //最初に入れた文字がstr2の先頭の文字になる//
	}
	 *sp2 = '\0';
}

/*
 * Plaese Enter a String str1[] :grape
str1[] = grape
str1[] = grape
*/
