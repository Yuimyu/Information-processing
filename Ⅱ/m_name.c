/*
 * m_name.c
 *
 *  Created on: 2021/11/11
 *      Author: h30m21 M4-24 âV“¡—BˆÛ
*/
#include<stdio.h>

int main(void){

	char *m_name[] = {"January","February","March","April","May","June","July","August","September","October","November","Desember"};
	char *w_name[] = {"–rŒ","”@Œ","–í¶","‰KŒ","HŒ","…–³Œ","•¶Œ","—tŒ","’·Œ","_–³Œ","‘šŒ","t‘–"};
	int month;

while(1){

	printf("Œ‚Ì”‚ğ“ü—Í: ");
	scanf("%d",&month);

	if(month < 1 || month > 12)
		break;
	printf(" %dŒ‚Í ‰pŒê‚Å%s , ˜a•—Œ–¼‚Í%s ‚Å‚·B\n",month, m_name[month-1], w_name[month-1]);
}
	printf("Program Terminated\n");
	 return 0;
}

/*Œ‚Ì”‚ğ“ü—Í: 1
1Œ‚Í ‰pŒê‚ÅJanuary , ˜a•—Œ–¼‚Í–rŒ ‚Å‚·B
Œ‚Ì”‚ğ“ü—Í: 2
2Œ‚Í ‰pŒê‚ÅFebruary , ˜a•—Œ–¼‚Í”@Œ ‚Å‚·B
Œ‚Ì”‚ğ“ü—Í: 3
3Œ‚Í ‰pŒê‚ÅMarch , ˜a•—Œ–¼‚Í–í¶ ‚Å‚·B
Œ‚Ì”‚ğ“ü—Í: 4
4Œ‚Í ‰pŒê‚ÅApril , ˜a•—Œ–¼‚Í‰KŒ ‚Å‚·B
Œ‚Ì”‚ğ“ü—Í: 5
5Œ‚Í ‰pŒê‚ÅMay , ˜a•—Œ–¼‚ÍHŒ ‚Å‚·B
Œ‚Ì”‚ğ“ü—Í: 6
6Œ‚Í ‰pŒê‚ÅJune , ˜a•—Œ–¼‚Í…–³Œ ‚Å‚·B
Œ‚Ì”‚ğ“ü—Í: 7
7Œ‚Í ‰pŒê‚ÅJuly , ˜a•—Œ–¼‚Í•¶Œ ‚Å‚·B
Œ‚Ì”‚ğ“ü—Í: 8
8Œ‚Í ‰pŒê‚ÅAugust , ˜a•—Œ–¼‚Í—tŒ ‚Å‚·B
Œ‚Ì”‚ğ“ü—Í: 9
9Œ‚Í ‰pŒê‚ÅSeptember , ˜a•—Œ–¼‚Í’·Œ ‚Å‚·B
Œ‚Ì”‚ğ“ü—Í: 10
10Œ‚Í ‰pŒê‚ÅOctober , ˜a•—Œ–¼‚Í_–³Œ ‚Å‚·B
Œ‚Ì”‚ğ“ü—Í: 11
11Œ‚Í ‰pŒê‚ÅNovember , ˜a•—Œ–¼‚Í‘šŒ ‚Å‚·B
Œ‚Ì”‚ğ“ü—Í: 12
12Œ‚Í ‰pŒê‚ÅDesember , ˜a•—Œ–¼‚Ít‘– ‚Å‚·B
Œ‚Ì”‚ğ“ü—Í: 20
Program Terminated
*/
