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
		//Menu Principal
		mvprintw(5, 20, "BIENVENIDO AL CINE:");
		mvprintw(6, 20, "1) Ver una Pelicula ");
		mvprintw(7, 20, "2) Comprar en la dulceria ");
		mvprintw(8, 20, "3) SALIR ");
		mvprintw(9, 20, "ELIGA OPCION: ");
		getstr(respuesta1);
		cleanScreen();
		if(respuesta1[0] ='1'){
			char respuesta2[1];
			//menu de peliculas
			mvprintw(5, 20, "Que tipo de pelicula quiere ver");
			getstr(respuesta2);
			cleanScreen();

		}
		if(respuesta1[1] = '2'){
			//menu de dulces
			bool menudulces =true;
			while(menudulces==true){
				char respuesta3[1];
				mvprintw(5, 20, " Tipo de Dulces ");
				mvprintw(6, 20, " Comida ");
				mvprintw(7, 20, " Palomitas ");
				mvprintw(8, 20, " Refresco ");
				mvprintw(9, 20, " Dulces ");
				mvprintw(10, 20, "Salir ");
				mvprintw(11, 20, "ELIGA UNA OPCION ");
				getstr(respuesta3);
				cleanScreen();
				if(respuesta3[0]='1'){
					char respuesta4[1];
					mvprintw(5, 20, " Seleccion el tipo de comida ");
					mvprintw(6, 20, " Hotdog ");
					mvprintw(7, 20, " Hamburguesa ");
					mvprintw(6, 20, " Papas ");
					mvprintw(8, 20, " Panino ");
					mvprintw(9, 20, " Nachos ");
					mvprintw(10, 20, " Salir ");
					getstr(respuesta4);
					cleanScreen();
				}else if(respuesta3[1]='2'){
					char respuesta5[1];
					mvprintw(5, 20, " Seleccion el tamano de las palomitas ");
					mvprintw(5, 20, " Palomitas pequeñas ");
					mvprintw(5, 20, " Palomitas medianas ");
					mvprintw(5, 20, " Palomitas grandes ");
					mvprintw(5, 20, " Salir ");
					getstr(respuesta5);
					cleanScreen();
				}else if(respuesta3[2] ='3'){

				}
			}
		}
		else{
			seguir=false;
		}
	}
	mvprintw(10, 20, "NOS VEMOS LUEGO!");
	getch();

	//cleanScreen()
	noecho();
	endwin();
}