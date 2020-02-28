#include<stdio.h>
#include<time.h>
#include"draw.h"
#include<stdlib.h>
#include"draw.cpp"

int generateNewBlock();
void play();
bool moveBlockDown(struct BlockState *block);
bool moveBlockLeft(struct BlockState *block);
bool moveBlockRight(struct BlockState *block);
bool checkOutOfBoard(int x, int y);
void rotateBlock(struct BlockState *block);
void stackCurrentBlock(const struct BlockState *block);
int checkCompleteRow();
bool isInvalidBlockPosition(const struct BlockState *block);

int main(){
	
	initscr();
	noecho();
	nodelay(stdscr, TRUE);
	keypad(stdscr, TRUE);
	srand((unsigned int)time(NULL));
	play();
	endwin();
}

void play(){
	time_t prevTime;
	time_t currentTime;

	int input;

	bool nextBlockFlag;
	
	struct BlockState currentBlock;
	while(true){
		nextBlockFlag = false;
		currentBlock.blockShape = generateNewBlock();
		currentBlock.blockRotate = 0;
		currentBlock.y = 0;
		currentBlock.x = BOARD_WIDTH / 2 - BLOCK_MAX_WIDTH / 2;
		if(isInvalidBlockPosition(&currentBlock)){
			printGameOverMessage();
			return;
		}

		time(&prevTime);
		while(!nextBlockFlag){
			while((input = getch()) == ERR){
				time(&currentTime);
				if(currentTime - prevTime < 1) continue;
				else{
					if(!moveBlockDown(&currentBlock)){
						nextBlockFlag = true;
						break;
					}
					prevTime = currentTime;
					printGameBoard(currentBlock.x, currentBlock.y, currentBlock.blockShape, currentBlock.blockRotate);
					refresh();
				}
				
			}
			if(nextBlockFlag)break;
			switch(input){
				case KEY_DOWN:
					moveBlockDown(&currentBlock);
					time(&prevTime);
					break;
				case KEY_UP:
					rotateBlock(&currentBlock);
					break;
				case KEY_LEFT:
					moveBlockLeft(&currentBlock);
					break;
				case KEY_RIGHT:
					moveBlockRight(&currentBlock);
					break;
				case ' ':
					while(moveBlockDown(&currentBlock));
					time(&prevTime);
					nextBlockFlag = true;
					break;
				default:
					break;
	
			}
			printGameBoard(currentBlock.x, currentBlock.y, currentBlock.blockShape, currentBlock.blockRotate);
			refresh();
			//printw("%d %d %d %d\n", currentBlock.x, currentBlock.y, currentBlock.blockShape, currentBlock.blockRotate);
			//moveBlockRight(&currentBlock);
			//moveBlockLeft(&currentBlock);
	
		}
		stackCurrentBlock(&currentBlock);
		checkCompleteRow();
	}

}

int generateNewBlock(){
	return rand() % NUMBER_OF_BLOCKS;
}

bool moveBlockDown(struct BlockState *block){
	// bottom '*' y check

	for(int x = 0; x < BLOCK_MAX_WIDTH; ++x){
		for(int y = 0; y < BLOCK_MAX_HEIGHT; ++y){
			if(blocks[block->blockShape][block->blockRotate][y][x] == '*'){
				if(stackedBlocks[block->y + y + 1][block->x + x] != '\0' || checkOutOfBoard(block->x + x, block->y + y + 1)){
					return false;
				}
			}
		}
	}

	++(block->y);
	
	return true;
}

bool moveBlockRight(struct BlockState *block){
	// right '*' x check
	for(int x = 0; x < BLOCK_MAX_WIDTH; ++x){
		for(int y = 0; y < BLOCK_MAX_HEIGHT; ++y){
			if(blocks[block->blockShape][block->blockRotate][y][x] == '*'){
				if(stackedBlocks[block->y + y][block->x + x + 1] != '\0' || checkOutOfBoard(block->x + x + 1, block->y + y)){
					return false;
				}
			}
		}
	}

	++(block->x);
	return true;
}

bool moveBlockLeft(struct BlockState *block){
	// left '*' x check
	for(int x = 0; x < BLOCK_MAX_WIDTH; ++x){
		for(int y = 0; y < BLOCK_MAX_HEIGHT; ++y){
			if(blocks[block->blockShape][block->blockRotate][y][x] == '*'){
				if(stackedBlocks[block->y + y][block->x + x - 1] != '\0' || checkOutOfBoard(block->x + x - 1, block->y + y)){
					return false;
				}
			}
		}
	}

	--(block->x);
	return true;
}

void rotateBlock(struct BlockState *block){
	bool cancelRotateFlag = false;
	++(block->blockRotate) %= 4;

	if(isInvalidBlockPosition(block)){
		printw("calcel rotate");
		block->blockRotate += 3;
		block->blockRotate %= 4;
	}
}

bool checkOutOfBoard(int x, int y){
	if(x < 0 || x >= BOARD_WIDTH || y < 0 || y >= BOARD_HEIGHT) return true;
	else return false;
}

void stackCurrentBlock(const struct BlockState *block){
	for(int x = 0; x < BLOCK_MAX_WIDTH; ++x){
		for(int y = 0; y < BLOCK_MAX_HEIGHT; ++y){
			if(blocks[block->blockShape][block->blockRotate][y][x] == '*'){
				stackedBlocks[block->y + y][block->x + x] = '*';
			}
		}
	}
}

int checkCompleteRow(){
	int completeRowCount = 0;
	for(int y = BOARD_HEIGHT - 1; y >= 0; --y){
		int x;
		for(x = 0; x < BOARD_WIDTH; ++x){
			if(stackedBlocks[y][x] == '\0')break;
		}
		if(x == BOARD_WIDTH){
			++completeRowCount;

			for(int y2 = y; y2 > 0; --y2){
				for(int x2 = 0; x2 < BOARD_WIDTH; ++x2){
					stackedBlocks[y2][x2] = stackedBlocks[y2 - 1][x2];
				}
			}
			for(int x2 = 0; x2 < BOARD_WIDTH; ++x2){
				stackedBlocks[0][x2] = '\0';
			}
			++y;
		}
	}
	return completeRowCount;
}

bool isInvalidBlockPosition(const struct BlockState *block){
	bool invalidPositionFlag = false;
	for(int x = 0; x < BLOCK_MAX_WIDTH && !invalidPositionFlag; ++x){
		for(int y = 0; y < BLOCK_MAX_HEIGHT; ++y){
			if(blocks[block->blockShape][block->blockRotate][y][x] == '*'){
				if(stackedBlocks[block->y + y][block->x + x] != '\0' || checkOutOfBoard(block->x + x, block->y + y)){
					invalidPositionFlag = true;
					break;
				}
			}
		}
	}
	return invalidPositionFlag;
}
