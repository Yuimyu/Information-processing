/*
 * list4_8.c
 *
 *  Created on: 2021/10/14
 *      Author: h30m21 M4-24 âV“¡—BˆÛ
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

	printf("%d‚ÌŠKæ‚Í%lf‚Å‚·B\n",x,ret);

	return 0;
}

double fact(int n){

	if(n == 0)
	{
		return 1.0L;
	}

	else if(n < 1)
	{
		printf("%d‚Í©‘R”‚Å‚Í‚ ‚è‚Ü‚¹‚ñB\n",n);

		return 0;
	}

	else
	{
		return n * fact(n-1);
	}
}

/*
please input data:  X = 20
20‚ÌŠKæ‚Í-1103013376‚Å‚·B

please input data:  X = 20
20‚ÌŠKæ‚Í2432902008176640000.000000‚Å‚·B

please input data:  X = -4
-4‚Í©‘R”‚Å‚Í‚ ‚è‚Ü‚¹‚ñB
-4‚ÌŠKæ‚Í0.000000‚Å‚·B
*/
