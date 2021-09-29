/*
 * list2_8.c
 *
 *  Created on: 2020/10/23
 *      Author: M3-16　齋藤唯維
 */


#include <stdio.h>

int main(void)
{
	double a,b;
	double wa,sa,seki,syo;

	printf("aとbに実数を　で区切って入力　->");
	scanf("%lf %lf",&a,&b);
	printf("a=%lf b=%lf \n",a,b);

	wa=a+b;
	printf("%lf+%lf=%lf\n",a,b,wa);

	sa=a-b;
	printf("%lf-%lf=%lf\n",a,b,sa);

	seki=a*b;
	printf("%lf*%lf=%lf\n",a,b,seki);

	syo=a/b;
	printf("%lf/%lf=%lf\n",a,b,syo);

	return 0;
}

/*aとbに実数を　で区切って入力　->600 300
a=600.000000 b=300.000000
600.000000+300.000000=900.000000
600.000000-300.000000=300.000000
600.000000*300.000000=180000.000000
600.000000/300.000000=2.000000
*/
