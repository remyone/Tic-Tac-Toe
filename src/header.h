#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define DEFAULT_TXT "\x1b[0m"

static char board[3][3] = { {'-', '-', '-'},
						    {'-', '-', '-'},
						    {'-', '-', '-'} };
bool isWorking = true;

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

void checkWinOrNot(short *ForB) {
	short int count = 0;
	if (*ForB == 1) {
		if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
			printf(RED"X is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
			printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
			printf(RED"X is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
			printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
			printf(RED"X is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
			printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
			printf(RED"X is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
			printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
			printf(RED"X is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
			printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') {
			printf(RED"X is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
			printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') {
			printf(RED"X is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
			printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {
			printf(RED"X is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
			printf(BLUE"O is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else {
			if (board[0][0] != '-' && board[0][1] != '-' && board[0][2] != '-' && board[1][0] != '-'
			 	&& board[1][1] != '-' && board[1][2] != '-' && board[2][0] != '-' && board[2][1] != '-'
			    && board[2][2] != '-') {
				printf("Draw!");
				isWorking = false;
			}
		}
	} else if (*ForB == 2) {
		if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
			printf(RED"You are winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
			printf(BLUE"Bot is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
			printf(RED"You are winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
			printf(BLUE"Bot is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
			printf(RED"You are winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
			printf(BLUE"Bot is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
			printf(RED"You are winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
			printf(BLUE"Bot is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
			printf(RED"You are winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
			printf(BLUE"Bot is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') {
			printf(RED"You are winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
			printf(BLUE"Bot is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') {
			printf(RED"You are winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
			printf(BLUE"Bot is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {
			printf(RED"You are winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
			printf(BLUE"Bot is winner!!!\n"DEFAULT_TXT);
			isWorking = false;
		} else {
			if (board[0][0] != '-' && board[0][1] != '-' && board[0][2] != '-' && board[1][0] != '-'
			 	&& board[1][1] != '-' && board[1][2] != '-' && board[2][0] != '-' && board[2][1] != '-'
			    && board[2][2] != '-') {
				printf("Draw!");
				isWorking = false;
			}
		}
	}
}
//levels
void easy(short *k, short *row, short *column, short *ForB) {
	short int notEmpty = 0;
	srand(time(NULL));
	while (isWorking) {
		int rowForBot = rand() % 2 + 1;
		int columnForBot = rand() % 2 + 1;
		if (*k == 2) {
			printf(RED"Your move now\n"DEFAULT_TXT);
			printf("entry row(0-2): ");
			scanf("%hd", row);
			printf("entry column(0-2): ");
			scanf("%hd", column);
			board[*row][*column] = 'X';
			*k = 1;
		} else if (*k == 1) {
			printf(BLUE"Bot's move now\n"DEFAULT_TXT);
			//algorithm of bot
			if (board[rowForBot][columnForBot] == '-')
				board[rowForBot][columnForBot] = 'O';
			else if (board[rowForBot][columnForBot] != '-')
				if (board[rowForBot-1][columnForBot-1] == '-')
					board[rowForBot-1][columnForBot-1] = 'O';
				else if (board[rowForBot+1][columnForBot+1] == '-')
					board[rowForBot+1][columnForBot+1] = 'O';
				else {
					for (int i = 0; i < 1; i++) {
						for (int j = 0; j < 3; j++) {
							if (board[i][j] == '-') {
								board[i][j] = 'O';
								notEmpty = 1;
								break;
							}
						}
					}
					if (notEmpty != 1) {
						for (int i = 1; i < 2; i++) {
							for (int j = 0; j < 3; j++) {
								if (board[i][j] == '-') {
									board[i][j] = 'O';
									notEmpty = 2;
									break;
								}
							}
						}
						if (notEmpty != 2) {
							for (int i = 2; i < 3; i++) {
								for (int j = 0; j < 3; j++) {
									if (board[i][j] == '-') {
										board[i][j] = 'O';
										notEmpty = 3;
										break;
									}
								}
							}
						}
					}
					notEmpty = 0;
				}
			*k = 2;
		}
		printBoard();
		checkWinOrNot(ForB);
	}
}

void medium(short *k, short *row, short *column, short *ForB) {
	int notEmpty = 0;
	srand(time(NULL));
	while (isWorking) {
		int rndNum = rand() % 2 + 1;
		if (*k == 2) {
			printf(RED"Your move now\n"DEFAULT_TXT);
			printf("entry row(0-2): ");
			scanf("%hd", row);
			printf("entry column(0-2): ");
			scanf("%hd", column);
			board[*row][*column] = 'X';
			*k = 1;
		} else if (*k == 1) {
			printf(BLUE"Bot's move now\n"DEFAULT_TXT);
			//algorithm of bot
			if (rndNum == 1) {
				if (board[0][0] == '-')
					board[0][0] = 'O';
				else if (board[2][0] == '-')
					board[2][0] = 'O';
				else if (board[2][2] == '-')
					board[2][2] = 'O';
				else if (board[0][2] == '-')
					board[0][2] = 'O';
				else if (board[0][0] == 'O' && board[2][0] == 'O' && board[1][0] == '-')
					board[1][0] = 'O';
				else if (board[2][0] == 'O' && board[2][2] == 'O' && board[2][1] == '-')
					board[2][1] = 'O';
				else if (board[0][0] == 'O' && board[0][2] == 'O' && board[0][1] == '-')
					board[0][1] = 'O';
				else if (board[2][2] == 'O' && board[0][1] == 'O' && board[1][2] == '-')
					board[1][2] == 'O';
				else if (board[0][0] == 'O' && board[2][2] == 'O' && board[1][1] == '-')
					board[1][1] = 'O';
				else if (board[0][2] == 'O' && board[2][0] == 'O' && board[1][1] == '-')
					board[1][1] = 'O';
			} else {
				for (int i = 0; i < 1; i++) {
						for (int j = 0; j < 3; j++) {
							if (board[i][j] == '-') {
								board[i][j] = 'O';
								notEmpty = 1;
								break;
							}
						}
					}
					if (notEmpty != 1) {
						for (int i = 1; i < 2; i++) {
							for (int j = 0; j < 3; j++) {
								if (board[i][j] == '-') {
									board[i][j] = 'O';
									notEmpty = 2;
									break;
								}
							}
						}
						if (notEmpty != 2) {
							for (int i = 2; i < 3; i++) {
								for (int j = 0; j < 3; j++) {
									if (board[i][j] == '-') {
										board[i][j] = 'O';
										notEmpty = 3;
										break;
									}
								}
							}
						}
					}
				notEmpty = 0;
			}
			*k = 2;
		}
		printBoard();
		checkWinOrNot(ForB);
	}
}

void hard() {

}

void createRndNumForTheBeggining(short *k) {
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
		*k = 1; // bot's move(O)
	}
	else if (random_number == 2) {
		*k = 2; // user's move(X)
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

void whoIsMovingAndCheck(short *ForB, short *k, short *row, short *column, short *m) {
	if (*ForB == 1) {
		while (isWorking) {
			if (*k == 1) {
				printf(RED"Entry row(0-2): "DEFAULT_TXT);
				scanf_s("%hd", row);
				printf(RED"Entry column(0-2): "DEFAULT_TXT);
				scanf_s("%hd", column);
				board[*row][*column] = 'X';
				*k = 2;
				printf(BLUE"O's move now\n"DEFAULT_TXT);
			}
			else if (*k == 2) {
				printf(BLUE"Entry row(0-2): "DEFAULT_TXT);
				scanf_s("%hd", row);
				printf(BLUE"Entry column(0-2): "DEFAULT_TXT);
				scanf_s("%hd", column);
				board[*row][*column] = 'O';
				*k = 1;
				printf(RED"X's move now\n"DEFAULT_TXT);
			}
			printBoard(board);
		}
		checkWinOrNot(ForB);
	}
	else if (*ForB == 2) {
		rndMoveBeggin(m);
		char level[15];
		printf("Entry level(easy, medium, hard): ");
		fgets(level, sizeof(level), stdin);
		fgets(level, sizeof(level), stdin);
		if (strstr(level, "easy") != NULL)
			easy(k, row, column, ForB);
		else if (strstr(level, "medium") != NULL)
			medium(k, row, column, ForB);
		else if (strstr(level, "hard") != NULL)
			hard();
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