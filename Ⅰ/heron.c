/*
 * heron.c
 *
 *  Created on: 2020/11/20
 *      Author: M3-16 �V���B��
 */


#include <stdio.h>
#include <math.h>

int main(void)
{
	double a,b,c,s,S;

	printf("�O�ӂ̒��� a,b,c��");
	scanf("%lf,%lf,%lf",&a,&b,&c);

	if(a+b<=c||b+c<=a||c+a<=b)
	{
		printf("�O�p�`�͂ł��Ȃ�(���^)\n");
		return 0;
	}

	else
	{
		s=a+b+c/2.0;
		S=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("�O�p�`�̖ʐ� S=%.3lf\n",S);
	}

	return 0;
}

/*
 * S:\��񏈗��T\heron\Debug>heron.exe
�O�ӂ̒��� a,b,c��54,876,45
�O�p�`�͂ł��Ȃ�(���^)

S:\��񏈗��T\heron\Debug>heron.exe
�O�ӂ̒��� a,b,c��5,6,8
�O�p�`�̖ʐ� S=97.211
 */
