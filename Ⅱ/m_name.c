/*
 * m_name.c
 *
 *  Created on: 2021/11/11
 *      Author: h30m21 M4-24 �V���B��
*/
#include<stdio.h>

int main(void){

	char *m_name[] = {"January","February","March","April","May","June","July","August","September","October","November","Desember"};
	char *w_name[] = {"�r��","�@��","�퐶","�K��","�H��","������","����","�t��","����","�_����","����","�t��"};
	int month;

while(1){

	printf("���̐������: ");
	scanf("%d",&month);

	if(month < 1 || month > 12)
		break;
	printf(" %d���� �p���%s , �a��������%s �ł��B\n",month, m_name[month-1], w_name[month-1]);
}
	printf("Program Terminated\n");
	 return 0;
}

/*���̐������: 1
1���� �p���January , �a�������͖r�� �ł��B
���̐������: 2
2���� �p���February , �a�������͔@�� �ł��B
���̐������: 3
3���� �p���March , �a�������͖퐶 �ł��B
���̐������: 4
4���� �p���April , �a�������͉K�� �ł��B
���̐������: 5
5���� �p���May , �a�������͎H�� �ł��B
���̐������: 6
6���� �p���June , �a�������͐����� �ł��B
���̐������: 7
7���� �p���July , �a�������͕��� �ł��B
���̐������: 8
8���� �p���August , �a�������͗t�� �ł��B
���̐������: 9
9���� �p���September , �a�������͒��� �ł��B
���̐������: 10
10���� �p���October , �a�������͐_���� �ł��B
���̐������: 11
11���� �p���November , �a�������͑��� �ł��B
���̐������: 12
12���� �p���Desember , �a�������͎t�� �ł��B
���̐������: 20
Program Terminated
*/
