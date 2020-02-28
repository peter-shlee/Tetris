#include<stdio.h>
#include "curses.h"

#define BOARD_HEIGHT 20
#define BOARD_WIDTH 10
#define BLOCK_MAX_WIDTH 4
#define BLOCK_MAX_HEIGHT 4
#define NUMBER_OF_BLOCKS 7
#define BLOCK_MAX_ROTATE 4

void printGameBoard(int currentFallingBlockX, int currentFallingBlockY, int blockShape, int blockRotate);
void printGameBoardBorder();
void printBlocks(int currentFallingBlockX, int currentFallingBlockY, int blockShape, int blockRotate);
void printFallingBlocks(int x, int y, int blockShape, int blockRotate);
void printStackedBlocks(char stackedBlocks[BOARD_HEIGHT][BOARD_WIDTH]);


