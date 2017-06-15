#include "Cine.h"

using namespace std;

Cine::Cine(){

}

void Cine::run(){
	srand(time(NULL));
	initscr();
	start_color();
	echo();
	boardPic();
	dibujologo();
	getch();
	cleanScreen();
	bool seguir = true;
	while(seguir==true){
		char respuesta1[1];
		//menu
		mvprintw(5, 20, "BIENVENIDO AL CINE:");
		mvprintw(6, 20, "1) ELEGIR UNA PELICULA ");
		mvprintw(7, 20, "2) COMPRAR EN LA DULCERIA ");
		mvprintw(8, 20, "3) SALIR ");
		mvprintw(9, 20, "ELIGA OPCION: ");
		getstr(respuesta1);
		cleanScreen();
		if(respuesta1[0] ='1'){

		}
		if(respuesta1[1] = '2'){

		}
		else{
			seguir=false;
		}
	}
}