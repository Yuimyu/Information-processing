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

	printf("a�̃A�h���X��%d�ł��B\n",&a);
	replace(&a,'Z');
	printf("replace�֐����s��� a = %'%c%'\n",a);

	return 0;
}

void replace(char *p, char c){

	printf("\n*** replace�֐����̏�� ***\n");
		printf("�|�C���^�ϐ�p�̓��e: %d\n", p);
		printf("char�^�ϐ�c�̓��e: %c\n",c);
		*p = c;
		printf("*p = c\n");
}
