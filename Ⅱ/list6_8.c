/*
 * list6_8.c
 *
 *  Created on: 2021/10/28
 *      Author: h30m21 M4-24Å@‚Vì°óBà€
 */

#include<stdio.h>

int kuku[9][9];

void table(void);
void hyoji(void);

int main(void){

	table();
	hyoji();

	return 0;
}

void table(void)
{

	int i;
	int j;

	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			kuku[i][j] = (i + 1) * (j + 1);
		}
	}
}

void hyoji(void){

	int i;
	int j;

	for(i = 0; i < 9; i++){

		for(j = 0; j < 9; j++){

			printf("%5d",kuku[i][j]);
		}
		printf("\n");
	}
}


/*
 1    2    3    4    5    6    7    8    9
 2    4    6    8   10   12   14   16   18
 3    6    9   12   15   18   21   24   27
 4    8   12   16   20   24   28   32   36
 5   10   15   20   25   30   35   40   45
 6   12   18   24   30   36   42   48   54
 7   14   21   28   35   42   413   56   63
 8   16   24   32   40   48   56   64   72
 9   18   27   36   45   54   63   72   81
 */
