#include "draw.h"

//int main(){
//	initscr();
//	noecho();
//	keypad(stdscr, TRUE);
//	
//	printGameBoard(0,0,0,0);
//	refresh();
//	getch();
//	printGameBoard(4,3,1,1);
//	refresh();
//	getch();
//	printGameBoard(6,15,6,2);
//	refresh();
//	getch();
//	printGameBoard(6,16,3,2);
//	refresh();
//	getch();
//
//
//	endwin();
//	return 0;
//}

void printGameBoard(int currentFallingBlockX, int currentFallingBlockY, int blockShape, int blockRotate){
	printGameBoardBorder();
	printBlocks(currentFallingBlockX, currentFallingBlockY, blockShape, blockRotate);
	move(20,30);
}

void printGameBoardBorder(){
	move(0, 0);
	for(int i = 0; i < BOARD_HEIGHT; ++i){
		printw("%c",'|');
		for(int j = 0; j < BOARD_WIDTH; ++j){
			printw("%c",' ');
		}
		printw("%c\n",'|');
	}
	printw("%c", ' ');
	for(int j = 0; j < BOARD_WIDTH; ++j){
		printw("%c", '-');
	}
	printw("%c\n", ' ');
}

void printBlocks(int currentFallingBlockX, int currentFallingBlockY, int blockShape, int blockRotate){
	printFallingBlocks(currentFallingBlockX, currentFallingBlockY, blockShape, blockRotate);
	printStackedBlocks(stackedBlocks);
}

void printStackedBlocks(char stackedBlocks[BOARD_HEIGHT][BOARD_WIDTH]){
	for(int y = 0; y < BOARD_HEIGHT; ++y){
		for(int x = 0; x < BOARD_WIDTH; ++x){
			if(stackedBlocks[y][x] == '*'){
				move(y, x + 1);
				printw("*");
			}
		}
	}
}

void printFallingBlocks(int x, int y, int blockShape, int blockRotate){
	for(int blockY = 0; blockY < BLOCK_MAX_HEIGHT; ++blockY){
		for(int blockX = 0; blockX < BLOCK_MAX_WIDTH; ++blockX){
			if(blocks[blockShape][blockRotate][blockY][blockX]=='*'){
				move(y + blockY, x + blockX +1);
				printw("*");
			}
		}
	}
}

void printGameOverMessage(){
	move(BOARD_HEIGHT / 2, BOARD_WIDTH / 2 - 4);
	printw("GAME OVER");
	while(getch() != '\n');
}
