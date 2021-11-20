/*
 * m_name.c
 *
 *  Created on: 2021/11/11
 *      Author: h30m21 M4-24 齋藤唯維
*/
#include<stdio.h>

int main(void){

	char *m_name[] = {"January","February","March","April","May","June","July","August","September","October","November","Desember"};
	char *w_name[] = {"睦月","如月","弥生","卯月","皐月","水無月","文月","葉月","長月","神無月","霜月","師走"};
	int month;

while(1){

	printf("月の数を入力: ");
	scanf("%d",&month);

	if(month < 1 || month > 12)
		break;
	printf(" %d月は 英語で%s , 和風月名は%s です。\n",month, m_name[month-1], w_name[month-1]);
}
	printf("Program Terminated\n");
	 return 0;
}

/*月の数を入力: 1
1月は 英語でJanuary , 和風月名は睦月 です。
月の数を入力: 2
2月は 英語でFebruary , 和風月名は如月 です。
月の数を入力: 3
3月は 英語でMarch , 和風月名は弥生 です。
月の数を入力: 4
4月は 英語でApril , 和風月名は卯月 です。
月の数を入力: 5
5月は 英語でMay , 和風月名は皐月 です。
月の数を入力: 6
6月は 英語でJune , 和風月名は水無月 です。
月の数を入力: 7
7月は 英語でJuly , 和風月名は文月 です。
月の数を入力: 8
8月は 英語でAugust , 和風月名は葉月 です。
月の数を入力: 9
9月は 英語でSeptember , 和風月名は長月 です。
月の数を入力: 10
10月は 英語でOctober , 和風月名は神無月 です。
月の数を入力: 11
11月は 英語でNovember , 和風月名は霜月 です。
月の数を入力: 12
12月は 英語でDesember , 和風月名は師走 です。
月の数を入力: 20
Program Terminated
*/
