#include "Cine.h"
#include <ncurses.h>
#include <vector>
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
	vector<Dulceria*> lista_dulceria;
	vector<Comida*> lista_comida;
	vector<Palomitas*> lista_palomitas;
	Comida food;
	bool seguir = true;
	while(seguir==true){
		char respuesta1[1];
		//Menu Principal
		mvprintw(5, 20, "---BIENVENIDO AL CINE---:");
		mvprintw(6, 20, " 1) Agregar Persona ");
		mvprintw(7, 20, " 2) Ver una Pelicula ");
		mvprintw(8, 20, " 3) Comprar en la dulceria ");
		mvprintw(9, 20, " 4) SALIR ");
		mvprintw(10, 20, "ELIGA OPCION: ");
		getstr(respuesta1);
		cleanScreen();
		if(respuesta1[0]=='1'){
			char respuestapersona[1];
			mvprintw(5, 20, " Que tipo de Persona quiere crear?: ");
			mvprintw(6, 20, " 1) Un Empledo ");
			mvprintw(7, 20, " 2) Un Cliente ");
			mvprintw(8, 20, " 3)  Salir ");
			mvprintw(9, 20, " Ingrese una opcion ");
			getstr(respuestapersona);
			cleanScreen();
			if(respuestapersona[0]=='1'){
				char respuestaempleado[1];
				mvprintw(5, 20 , "Que tipo de empleado desea agregar?: ");
				mvprintw(6, 20 ," 1) Un Administrador ");
				mvprintw(7, 20 ," 2) Un Trabajador ");
				mvprintw(8, 20 ," 3) Salir ");
				mvprintw(9, 20, " Ingrese una opcion ");
				getstr(respuestaempleado);
				cleanScreen();
				if(respuestaempleado[0]=='1'){
					mvprintw(5,20, "Ingrese el nombre de la persona: ");
					char nombre[50];
					getstr(nombre);
					string nombre1 = static_cast<char*>(nombre);
					mvprintw(6,20, "Ingrese la edad: ");
					char edad[2];
					getstr(edad);
					string edad1(edad);
					int edad2 =atoi(edad1.c_str());
				}else if(respuestaempleado[0]=='2'){

				}
			}else if(respuestapersona[0]=='2'){

			}
		}else if(respuesta1[0]=='2'){
			char respuestapeliculas[1];
			mvprintw(5, 20, " Eliga la pelicula que desea ver ");
			mvprintw(6, 20, " 1) Baywatch  ");
			mvprintw(7, 20, " 2) Cars 3 ");
			mvprintw(8, 20, " 3) La Momia ");
			mvprintw(9, 20, " 4) La Mujer Maravilla ");
			mvprintw(10, 20, " 5) Como Ser Un Latin Lover ");
			mvprintw(11, 20, " 6) Resident Evil ");
			mvprintw(12, 20, " 7) Piratas del Caribe ");
			mvprintw(13, 20, "Eliga una opcion ");
			getstr(respuestapeliculas);
			cleanScreen();
			if(respuestapeliculas[0]=='1'){

			}else if(respuestapeliculas[0]=='2'){

			}else if(respuestapeliculas[0]=='3'){

			}else if(respuestapeliculas[0]=='4'){

			}else if(respuestapeliculas[0]=='5'){

			}else if(respuestapeliculas[0]=='6'){

			}else if(respuestapeliculas[0]=='7'){

			}
		}else if(respuesta1[0]=='3'){
			char respuestacomida[1];
			double precio;
			mvprintw(5, 20, " Eliga la comida ");
			mvprintw(6, 20, " 1) Hotdog ");
			mvprintw(7, 20, " 2) Nachos ");
			mvprintw(8, 20, " 3) Hamburguesa ");
			mvprintw(9, 20, " 4) Panino ");
			mvprintw(10, 20, " 5) Papas ");
			mvprintw(11, 20, " Eliga una opcion ");
			getstr(respuestacomida);	
			cleanScreen();
			if(respuestacomida[0]=='1'){
				precio = food.getPrecio();
				mvprintw(13, 20, " Su total a pagar es: Lps. 45.00");
				lista_comida.push_back(new Comida("Hotdog", precio));
			}else if(respuestacomida[0]=='2'){
				precio = food.getPrecio();
				mvprintw(13, 20, " Su total a pagar es: Lps. 37.50");
				lista_comida.push_back(new Comida("Nachos", precio));
			}else if(respuestacomida[0]=='3'){
				precio = food.getPrecio();
				mvprintw(13, 20, " Su total a pagar es: Lps. 50.00");
				lista_comida.push_back(new Comida("Hamburguesa", precio));
			}else if(respuestacomida[0]=='4'){
				precio = food.getPrecio();
				mvprintw(13, 20, " Su total a pagar es: Lps. 55.00");
				lista_comida.push_back(new Comida("Panino", precio));
			}else if(respuestacomida[0]=='5'){
				precio = food.getPrecio();
				mvprintw(13, 20, " Su total a pagar es: Lps. 25.00");
				lista_comida.push_back(new Comida("Papas", precio));
			}


		}else{
			seguir=false;
		}
	
	mvprintw(17, 20, "NOS VEMOS LUEGO!");
	getch();
	cleanScreen();
	//cleanScreen()
	noecho();
	endwin();
	}
}

void Cine::cleanScreen(){
	for (int i = 0; i < LINES; i++){
		for (int j = 0; j < COLS; j++){
			mvprintw(i,j," ");
		}
	}
}

void Cine::boardPic(){
	move(1,1);
}

void Cine::dibujologo(){
	mvprintw(5,20, "Cine");
}


