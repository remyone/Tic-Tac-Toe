#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define RED "\x1b[31m"
#define BLUE "\x1b[34m"
#define DEFAULT_TXT "\x1b[0m"

void printBoard(char arr[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == 'X') 
				printf(RED"%c"DEFAULT_TXT, arr[i][j]);
			else if (arr[i][j] == 'O') 
				printf(BLUE"%c"DEFAULT_TXT, arr[i][j]);
			else 
				printf("%c", arr[i][j]);
		
		}
		printf("\n");
	}
	printf("\n");
}

void checkWinOrNot(char arr[3][3], bool *isWorking) {
	if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	}
}


void createRndNumForTheBeggining(short* k) {
	srand(time(NULL));
	int random_number = rand() % 2 + 1;
	if (random_number == 1) {
		*k = 1;
		printf("X's move now\n");
	} else if (random_number == 2) {
		*k = 2;
		printf("O's move now\n");
	}
}

void createRndNumForTheBegginingForBotLevel(short *k, short *l) {
	srand(time(NULL));
	int random_number = rand() % 2 + 1;
	int random_number1 = rand() % 2 + 1;
	if (random_number == 1) {
		*k = 1;
		if (random_number1 == 1) {
			printf("Bot's(X) move now\n");
		}
		else {
			printf("Bot's(O) move now\n");
		}
	}
	else if (random_number == 2) {
		*k = 2;
		if (random_number1 == 1) {
			printf("Your(X) move now");
		} else {
			printf("Your(O) move now");
		}
	}
}

void rndMoveBeggin(short *m) {
	srand(time(NULL));
	int rnd_move = rand() % 2 + 1;
	if (rnd_move == 1)
		*m = 1;
	else if (rnd_move == 2)
		*m = 2;
}

void whoIsMovingAndCheck(short *ForB, short *k, short *row, short *column, char board[3][3], bool *isWorking, short *m) {
	if (*ForB == 1) {
		printf("Entry row(0-2): ");
		scanf_s("%hd", row);
		printf("Entry column(0-2): ");
		scanf_s("%hd", column);
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
		printBoard(board);
	}
	/*else if (*ForB == 2) {
		rndMoveBeggin(*m);
		char level[6];
		printf("Entry level(easy, medium, hard): ");
		fgets(level, sizeof(level), stdin);
		if (level == "easy") {
			easy(board, *k, *row, *column, *m);
		}
		else if (level == "medium") {
			medium();
		}
		else if (level == "hard") {
			hard();
		}
	}*/
	else {
		if (*ForB > 2) {
			printf("you wrote the number that is higher than the required number");
			*isWorking = false;
		}
		else if (*ForB < 1) {
			printf("you wrote the number that is less than the required number");
			*isWorking = false;
		}
	}
}