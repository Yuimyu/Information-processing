/*
 * list2-10-11.c
 *
 *  Created on: 2020/10/29
 *      Author: M3-16 �V���@�B��
 */


#include <stdio.h>

int main(void)
{
	int a,b,c;

	a=12;     //a<-12 a��12����

	b=++a;    //a��1���������l��b�ɑ��
	c=a++;    //a�̒l��c�ɑ���� a��1��������

	printf("[increment]\n");         //[increment]�ƕ\��
	printf("%d,%d,%d\n\n",a,b,c);    //a,b,c �̓��e���o�͂��ĉ��s


	a=12;     //a<-12 �Ă� a��12����

		b=--a;    //a��1���������l��b�ɑ��
		c=a--;    //a�̒l��c�ɑ���� a��1������

		printf("[decrement]\n");       //[decrement]�ƕ\��
		printf("%d,%d,%d\n",a,b,c);    //a,b,c �̓��e���o�͂��ĉ��s

	return 0;
}


/*[increment]
14,13,13

[decrement]
10,11,11
*/
