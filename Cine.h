#include <vector>
#include <string.h>
#include <iostream>
#include <sstream>
#include <typeinfo>
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

#include "Administrador.h"
#include "Cartelera.h"
#include "Comida.h"
#include "Cliente.h"
#include "Dulceria.h"
#include "Dulces.h"
#include "Empleado.h"
#include "Palomitas.h"
#include "Pelicula.h"
#include "Persona.h"
#include "Refresco.h"
#include "Trabajador.h"
#include "Sala.h"


#ifndef CINE_H
#define CINE_H

using namespace std;

class Cine{
	private:
		vector<Dulceria*> listadulce;
		vector<Persona*> listapersona;
		vector<Pelicula*> listapelicula;
	public:
		Cine();
		void imprimirdulce();
		void imprimirpelicula();
		void run();
		void boardPic();
		void dibujologo();
		void dibujodulce();
		void dibujopelicula();
		void cleanScreen();
};
#endif