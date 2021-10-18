/*
 * list6_3.c
 *
 *  Created on: 2021/10/18
 *      Author: h30m21 M4-24　齋藤唯維
 */
#include<stdio.h>

double height[100];       //グローバル配列（全ての領域で有効）

double average(int max);	        //prototype declare

int main(void){

	int cnt = 0;
	double h;

	printf("please input a height:");
	scanf("%lf",&h);

	while((cnt < 100) && (h > 0.0)){        //入力値の判別    &&→両方とも真のときに真

		height[cnt] = h;
		cnt++;
		printf("please input a height:");
		scanf("%lf",&h);
	}

	printf("average height: %5.2lf\n",average(cnt));

	return 0;

}

double average(int max){

	int i;
	double total =0.0;

	for(i = 0; i < max; i++){

		total += height[i];        //←グローバル宣言なので、この関数で宣言しなくても使える
	}

	return total / max;
}

/*please input a height:150.66
please input a height:176.22
please input a height:164.3333
please input a height:159.46
please input a height:167.555
please input a height:180.999
please input a height:162.54787
please input a height:156.555
please input a height:186.114444
please input a height:168.4455
please input a height:155.444
please input a height:183.452
please input a height:176.521447
please input a height:164.65478
please input a height:186.4225
please input a height:173.3215
please input a height:160.1796
please input a height:
0
average height: 168.99*/
