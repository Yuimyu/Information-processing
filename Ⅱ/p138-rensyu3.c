/*
 * p138-rensyu3.c
 *
 *  Created on: 2021/11/01
 *      Author: h30m21 M4-24Å@‚Vì°óBà€
 */


#include<stdio.h>

int strcomp(char buf1[], char buf2[]);

int main(void){

	char buf1[100] = "Setting function";
	char buf2[100] = "Setting function";

	if(strcomp(buf1, buf2) != 0)
		printf("equal\n");
	else
		printf("different\n");

	return 0;
}

int strcomp(char buf1[], char buf2[]){

	int i = 0, flag = 0;

	while(buf1[i] == buf2[i]){

		if(buf1[i] == '\0' && buf2[i] == '\0')
		{
			flag = 1;
			break;
		}
		i++;
	}
	return flag;
}

/*
 * S:\èÓïÒèàóùáU\p138-rensyu3\Debug>p138-rensyu3.exe
equal
 */
