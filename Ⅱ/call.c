/*
 * call.c
 *
 *  Created on: 2021/11/18
 *      Author: h30m21
 */


#include<stdio.h>

void replsce(char *, char);

int main(void){

	char a = 'A';

	printf("aのアドレスは%dです。\n",&a);
	replace(&a,'Z');
	printf("replace関数実行後の a = %'%c%'\n",a);

	return 0;
}

void replace(char *p, char c){

	printf("\n*** replace関数内の情報 ***\n");
		printf("ポインタ変数pの内容: %d\n", p);
		printf("char型変数cの内容: %c\n",c);
		*p = c;
		printf("*p = c\n");
}
