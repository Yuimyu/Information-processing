/*
 * brk_cont.c
 *
 *  Created on: 2020/11/13
 *      Author: M3-16 âV“¡—BˆÛ
 */


#include <stdio.h>

int main(void)
{
	int i,n,sum=0;

	for(i=1;i<=5;i++)
	{
		scanf("%d",&n);

		if(n<0)

			continue;

		sum += n;
	}
	printf("sum=%d\n",sum);
	return 0;
}

/*
1
3
5
-2
8
sum=17
*/
