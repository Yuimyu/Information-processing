/*
 * list4_8.c
 *
 *  Created on: 2021/10/14
 *      Author: h30m21 M4-24 齋藤唯維
 */

#include<stdio.h>

double fact(int n);

int main(void)
{
	int x;
	double ret;

	printf("please input data:  X = ");
	scanf("%d",&x);

	ret = fact(x);

	printf("%dの階乗は%lfです。\n",x,ret);

	return 0;
}

double fact(int n){

	if(n == 0)
	{
		return 1.0L;
	}

	else if(n < 1)
	{
		printf("%dは自然数ではありません。\n",n);

		return 0;
	}

	else
	{
		return n * fact(n-1);
	}
}

/*
please input data:  X = 20
20の階乗は-1103013376です。

please input data:  X = 20
20の階乗は2432902008176640000.000000です。

please input data:  X = -4
-4は自然数ではありません。
-4の階乗は0.000000です。
*/
