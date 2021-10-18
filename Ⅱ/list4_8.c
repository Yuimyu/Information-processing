/*
 * list4_8.c
 *
 *  Created on: 2021/10/14
 *      Author: h30m21 M4-24 �V���B��
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

	printf("%d�̊K���%lf�ł��B\n",x,ret);

	return 0;
}

double fact(int n){

	if(n == 0)
	{
		return 1.0L;
	}

	else if(n < 1)
	{
		printf("%d�͎��R���ł͂���܂���B\n",n);

		return 0;
	}

	else
	{
		return n * fact(n-1);
	}
}

/*
please input data:  X = 20
20�̊K���-1103013376�ł��B

please input data:  X = 20
20�̊K���2432902008176640000.000000�ł��B

please input data:  X = -4
-4�͎��R���ł͂���܂���B
-4�̊K���0.000000�ł��B
*/
