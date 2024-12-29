#include "header.h"

int main()
{
	bool isWorking = true;
	short k, l, row, column, ForB, move;
	short *p_k = &k;
	menu();
	scanf_s("%hd", &ForB);
	printf("That is your board:\n");
	printBoard();
	if (ForB == 1)
		createRndNumForTheBeggining(p_k);
	else if (ForB == 2)
		createRndNumForTheBegginingForBotLevel(p_k, &l);
	while (isWorking) {
		whoIsMovingAndCheck(&ForB, p_k, &row, &column, &isWorking, &move);
		checkWinOrNot(&isWorking);
	}
	return 0;
}