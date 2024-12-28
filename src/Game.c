#include "header.h"

int main()
{
	printf("Welcome to game 'Tic Tac Toe'\n");
	printf("I suppose that you know the rules\n");
	char board[3][3] = { {'-', '-', '-'},
						 {'-', '-', '-'},
						 {'-', '-', '-'} };
	printBoard(board);
	bool isWorking = true;
	short k;
	short *p_k = &k;
	short l;
	short row;
	short column;
	short ForB;
	short move;
	printf("1.play with friend or 2.play with bot?(choose 1 or 2): ");
	scanf_s("%hd", &ForB);
	if (ForB == 1)
		createRndNumForTheBeggining(p_k);
	else if (ForB == 2)
		createRndNumForTheBegginingForBotLevel(p_k, &l);
	while (isWorking) {
		whoIsMovingAndCheck(&ForB, p_k, &row, &column, board, &isWorking, &move);
		checkWinOrNot(board, &isWorking);
	}
	return 0;
}