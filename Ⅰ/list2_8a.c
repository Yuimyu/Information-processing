/*
 * list2_8a.c
 *
 *  Created on: 2020/10/23
 *      Author: M3-16　齋藤唯維
 */


#include <stdio.h>

int main(void)
{
	int a,b;
	int wa,sa,seki,syo,amari;

	printf("aとbに実数を　で区切って入力　->");
	scanf("%d %d",&a,&b);
	printf("a=%d b=%d \n",a,b);

	wa=a+b;
	printf("%d+%d=%d\n",a,b,wa);

	sa=a-b;
	printf("%d-%d=%d\n",a,b,sa);

	seki=a*b;
	printf("%d*%d=%d\n",a,b,seki);

	syo=a/b;
	printf("%d/%d=%d\n",a,b,syo);

	amari=a%b;
	printf("%d%%%d=%d\n",a,b,amari);

	return 0;
}
/*
aとbに実数を　で区切って入力　->50 3
a=50 b=3
50+3=53
50-3=47
50*3=150
50/3=16
50%3=2
*/
