#include <ncurses.h>
#include <iostream>
using namespace std;
int main(){
	initscr();						/*Start curses mode*/
	      /*print Hello World*/
	printw("fuck");
	printw("fhgsdjfhdskfj");
	refresh();						/*print it on the real screen*/
	getch();						/*wait for user input*/
	endwin();						/*End curses mode*/
	return 0;
}