/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

void easy(char board[3][3], short *k, short *row, short *column, short *move) {
	srand(time(NULL));
	int num = 3;
	int num1 = 3;
	int rnd_num1 = rand() % num + 1;
	int rnd_num2 = rand() % num1 + 1;
	if (*move == 2) {
		printf("Entry row(0-2): ");
		scanf_s("%hd", &row);
		printf("Entry column(0-2): ");
		scanf_s("%hd", &column);
		if (*k == 1) {
			board[*row][*column] = 'X';
			*k = 2;
			printf("O's move now\n");
		}
		else if (*k == 2) {
			board[*row][*column] = 'O';
			*k = 1;
			printf("X's move now\n");
		}
		*move = 1;
		printBoard(board);
	} else if (*move == 1) {
		if (board[rnd_num1][rnd_num2] != '-' && *k == 1) {
			board[rnd_num1][rnd_num2] = 'X';
			*k = 2;
		}
		else if (board[rnd_num1][rnd_num2] != '-' && *k == 2) {
			board[rnd_num1][rnd_num2] = 'O';
			*k = 1;
		}
		else {
			rnd_num1--;
			rnd_num2--;
		}
		*move = 2;
	}
}

/*void medium() {

}

void hard() {

}
*/