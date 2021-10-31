/*
 * list6_5.c
 *
 *  Created on: 2021/10/21
 *      Author: h30m21 M4-24@âV“¡—BˆÛ
 */


#include<stdio.h>

int main(void){

	char moji[7] = "spring";
	int i = 0;

	while(moji[i] != '\0'){        //ƒkƒ‹ƒR[ƒh‚É‚È‚é‚Ü‚Å

		printf("%c", moji[i++]);
	}

	printf("\n");

	printf("%s\n",moji);

	printf("•¶š—ñ‚Ì’†’f");
	moji[4] = '\0';
	printf("%s\n",moji);
	return 0;
}

/*spring
spring
•¶š—ñ‚Ì’†’fspri
*/
