#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define DEFAULT_TXT "\x1b[0m"

static char board[3][3] = { {'-', '-', '-'},
						    {'-', '-', '-'},
						    {'-', '-', '-'} };

void printBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] == 'X') 
				printf(RED"%c"DEFAULT_TXT, board[i][j]);
			else if (board[i][j] == 'O') 
				printf(BLUE"%c"DEFAULT_TXT, board[i][j]);
			else 
				printf("%c", board[i][j]);
		
		}
		printf("\n");
	}
	printf("\n");
}

void checkWinOrNot(bool *isWorking) {
	if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {
		printf(RED"X is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	} else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
		printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
		*isWorking = false;
	}
}


void createRndNumForTheBeggining(short* k) {
	srand(time(NULL));
	int random_number = rand() % 2 + 1;
	if (random_number == 1) {
		*k = 1;
		printf(RED"X's move now\n"DEFAULT_TXT);
	} else if (random_number == 2) {
		*k = 2;
		printf(BLUE"O's move now\n"DEFAULT_TXT);
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

void whoIsMovingAndCheck(short *ForB, short *k, short *row, short *column, bool *isWorking, short *m) {
	if (*ForB == 1) {
		printf("Entry row(0-2): ");
		scanf_s("%hd", row);
		printf("Entry column(0-2): ");
		scanf_s("%hd", column);
		if (*k == 1) {
			board[*row][*column] = 'X';
			*k = 2;
			printf(BLUE"O's move now\n"DEFAULT_TXT);
		}
		else if (*k == 2) {
			board[*row][*column] = 'O';
			*k = 1;
			printf(RED"X's move now\n"DEFAULT_TXT);
		}
		printBoard(board);
	}
	/*else if (*ForB == 2) {
		rndMoveBeggin(*m);
		char level[6];
		printf("Entry level(easy, medium, hard): ");
		fgets(level, sizeof(level), stdin);
		if (level == "easy") {
			easy(*k, *row, *column, *m);
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

void menu() {
	printf(BLUE"****************************\n*"DEFAULT_TXT);
	printf(YELLOW"       Tic Tac Toe    "DEFAULT_TXT);
	printf(BLUE"    *\n****************************\n*"DEFAULT_TXT);
	printf(GREEN" 1. play with friend    "DEFAULT_TXT);
	printf(BLUE"  *\n*"DEFAULT_TXT);
	printf(GREEN" 2. play with bot       "DEFAULT_TXT);
	printf(BLUE"  *\n*"DEFAULT_TXT);
	printf(RED" 3. exit                "DEFAULT_TXT);
	printf(BLUE"  *\n****************************\n"DEFAULT_TXT);
	printf(BLUE"choose the number: "DEFAULT_TXT);
}