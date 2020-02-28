#include<iostream>
#include<stdio.h>
#include<curses.h>
using namespace::std;

int main(){
	initscr();
	move(3, 3);
	printw("helloworld\n");
	getch();
	refresh();
	endwin();

	return 0;
}
