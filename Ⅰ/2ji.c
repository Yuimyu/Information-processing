/*
 * 2ji.c
 *
 *  Created on: 2020/11/19
 *      Author: M3-16�@�V���B��
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a,b,c,d,x1,x2;

	printf("a,b,c��");
	scanf("%lf,%lf,%lf",&a,&b,&c);

	d=b*b-4*a*c;

	if(d>0.0)
	{
		printf("2�̎�����\n");
		x1=(-b+sqrt(d))/2*1/a;
		x2=(-b-sqrt(d))/2*1/a;
		printf("x1=%lf  x2=%lf",x1,x2);
	}

	else if(d==0.0)
	{
		printf("1�̎�����\n");
		x1=-b/(2*a);
		printf("x1=%lf",x1);
	}

	else
	printf("�������Ȃ�\n");

	return 0;
}
/*
a,b,c��3,5,2
2�̎�����
x1=-0.666667  x2=-1.000000
a,b,c��1,2,1
1�̎�����
x1=-1.000000
*/
