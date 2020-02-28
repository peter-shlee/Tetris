char stackedBlocks[BOARD_HEIGHT][BOARD_WIDTH] = {
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'}
};

char blocks[NUMBER_OF_BLOCKS][4][BLOCK_MAX_HEIGHT][BLOCK_MAX_WIDTH] = {
  {
     {
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'}
     },
     {
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'}
     }
  },
  {
     {
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'}
     },
     {
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'}
     }
  },
  {
     {
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'}
     },
     {
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'}
     }
  },
  {
     {
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'}
     },
     {
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'}
     }
  },
  {
     {
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'}
     },
     {
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'}
     }
  },
  {
     {
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'}
     },
     {
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'}
     }
  },
  {
     {
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'}
     },
     {
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'}
     }
  },
}
struct BlockState{
	int blockShape;
	int blockRotate;
	int x;
	int y;
};

char stackedBlocks[BOARD_HEIGHT][BOARD_WIDTH] = {
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'}
};

char blocks[NUMBER_OF_BLOCKS][4][BLOCK_MAX_HEIGHT][BLOCK_MAX_WIDTH] = {
  {
     {
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'},
	{'\0','\0','*','\0'}
     },
     {
	{'\0','\0','\0','\0'},
	{'\0','\0','\0','\0'},
	{'*','*','*','*'},
	{'\0','\0','\0','\0'}
     },
     {
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'},
	{'\0','*','\0','\0'}
     }
  },