/*
 * rensyu_3.c
 *
 *  Created on: 2021/10/07
 *      Author: h30m21 M4-24 �V���B��
 */




#include<stdio.h>

	int kbinp(void);
	int sigma(int x ,int y);

int main(void){

	int x, y, ret;
	x = kbinp();
	y= kbinp();
	ret  = sigma(x, y);

	printf("total = %d\n",ret);
}

int kbinp(void){

	int n;

	printf("Please Enter Value");
	scanf("%d",&n);

	return n;
}

int sigma(int x,int y){

	int total = 0;

	for(; x <= y ; x++){
		total += x;
	}
	return total;
}

/*S:\��񏈗��U\list4_3\Debug>list4_3.exe
please input date : x =5
please input date : y =9
x=5, y=9

S:\��񏈗��U\list4_3\Debug>list4_3.exe
please input date : x =9
please input date : y =5
x=5, y=9*/
