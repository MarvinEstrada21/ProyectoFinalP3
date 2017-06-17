
/*#include "Cartelera.h"
#include "Comida.h"
#include "Dulceria.h"
#include "Dulces.h"
#include "Palomitas.h"
#include "Pelicula.h"
#include "Persona.h"
#include "Refresco.h"
#include "Sala.h"*/

#include <vector>
#include <string>
#include <iostream>
#include <sstream>

#include <typeinfo>

#include <ncurses.h>
#include <fstream>//para archivos binarios
#include "Cine.h"

using namespace std;

int main(){
	Cine cine;
	cine.run();
	return 0;
}