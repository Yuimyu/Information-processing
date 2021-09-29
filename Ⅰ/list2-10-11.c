/*
 * list2-10-11.c
 *
 *  Created on: 2020/10/29
 *      Author: M3-16 齋藤　唯維
 */


#include <stdio.h>

int main(void)
{
	int a,b,c;

	a=12;     //a<-12 aに12を代入

	b=++a;    //aに1を加えた値をbに代入
	c=a++;    //aの値をcに代入後 aに1を加える

	printf("[increment]\n");         //[increment]と表示
	printf("%d,%d,%d\n\n",a,b,c);    //a,b,c の内容を出力して改行


	a=12;     //a<-12 再び aに12を代入

		b=--a;    //aに1を引いた値をbに代入
		c=a--;    //aの値をcに代入後 aに1を引く

		printf("[decrement]\n");       //[decrement]と表示
		printf("%d,%d,%d\n",a,b,c);    //a,b,c の内容を出力して改行

	return 0;
}


/*[increment]
14,13,13

[decrement]
10,11,11
*/
