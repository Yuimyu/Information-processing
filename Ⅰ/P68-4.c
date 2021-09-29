/*
 * P68-4.c
 *
 *  Created on: 2020/11/19
 *      Author: h30m21
 */


#include <stdio.h>

int main(void)
{
	int i,d,max,min;

	for(i=1;i<=10;i++)
	{
		printf("%dŒÂ‚ß‚Ì’l¨",i);
		scanf("%d",&d);

		if(i==1)
		{
			max=d;          //1s‚Å‚à‘‚¯‚é
			min=d;          //max=min=d;
		}

		if(max<d)
		{
			max=d;
		}

		if(min>d)
		{
			min=d;
		}

	}
	printf("max=%d min=%d\n",max,min);

	return 0;
}
