/*
 * P67-2.c
 *
 *  Created on: 2020/11/06
 *      Author: M3-16 齋藤唯維
 */


#include <stdio.h>

int main(void)

{
	int i;
	double data,total=0.0,ave;

	printf("P67-2 平均値の計算\n");
	for (i=1; i<=3; i++)
	{
		printf("%d個目の値 ",i);
		scanf("%lf",&data);
		total+=data;
	}

	ave=total/(i-1);
	printf("average=%.2lf\n",ave);
	return 0;
}


/*P67-2 平均値の計算
1個目の値 45
2個目の値 15
3個目の値 94
average=51.33
*/
