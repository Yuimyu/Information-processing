/*
 * list6_6.c
 *
 *  Created on: 2021/10/21
 *      Author: h30m21 M4-24 齋藤唯維
 */

#include<stdio.h>

int main(void){

	char str1[5] = "abcd";
	char str2[5] = "opqr";
	char str3[9];
	int i = 0;
	int j = 0;

	while(str1[i] != '\0'){        //ヌルコードになるまで

		str3[j] = str1[i];
		i++;
		j++;
	}

	printf("str1のコピーで用いられるwhile文の終了時のi,jの値\n");
	printf("i = %d, j = %d\n",i,j);
	i = 0;

	i = 0;

	while(str2[i] != '\0'){

		str3[j++] = str2[i++];
	}

	str3[j] = '\0';
	printf("str3[] = %s\n",str3);
	return 0;
}

/*str1のコピーで用いられるwhile文の終了時のi,jの値
i = 4, j = 4
str3[] = abcdopqr
*/
