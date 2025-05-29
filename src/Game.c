#include "header.h"

int main()
{
	short k, l, row, column, ForB, move;
	short *p_k = &k;
	menu();
	scanf("%hd", &ForB);
	if (ForB == 1) {
		createRndNumForTheBeggining(p_k);
		printf("That is your board:\n");
		printBoard();
	}
	else if (ForB == 2)
		createRndNumForTheBegginingForBotLevel(p_k, &l);
	else if (ForB == 3) {
		printf(GREEN"have a nice day and good luck!"DEFAULT_TXT);
		isWorking = false;
	}
	whoIsMovingAndCheck(&ForB, p_k, &row, &column, &move);
	return 0;
}
