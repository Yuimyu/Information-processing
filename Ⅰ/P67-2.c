/*
 * P67-2.c
 *
 *  Created on: 2020/11/06
 *      Author: M3-16 �V���B��
 */


#include <stdio.h>

int main(void)

{
	int i;
	double data,total=0.0,ave;

	printf("P67-2 ���ϒl�̌v�Z\n");
	for (i=1; i<=3; i++)
	{
		printf("%d�ڂ̒l ",i);
		scanf("%lf",&data);
		total+=data;
	}

	ave=total/(i-1);
	printf("average=%.2lf\n",ave);
	return 0;
}


/*P67-2 ���ϒl�̌v�Z
1�ڂ̒l 45
2�ڂ̒l 15
3�ڂ̒l 94
average=51.33
*/
