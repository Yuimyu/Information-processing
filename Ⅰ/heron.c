/*
 * heron.c
 *
 *  Created on: 2020/11/20
 *      Author: M3-16 齋藤唯維
 */


#include <stdio.h>
#include <math.h>

int main(void)
{
	double a,b,c,s,S;

	printf("三辺の長さ a,b,c→");
	scanf("%lf,%lf,%lf",&a,&b,&c);

	if(a+b<=c||b+c<=a||c+a<=b)
	{
		printf("三角形はできない(迫真)\n");
		return 0;
	}

	else
	{
		s=a+b+c/2.0;
		S=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("三角形の面積 S=%.3lf\n",S);
	}

	return 0;
}

/*
 * S:\情報処理Ⅰ\heron\Debug>heron.exe
三辺の長さ a,b,c→54,876,45
三角形はできない(迫真)

S:\情報処理Ⅰ\heron\Debug>heron.exe
三辺の長さ a,b,c→5,6,8
三角形の面積 S=97.211
 */
