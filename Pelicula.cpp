#include "Pelicula.h"

using namespace std;

Pelicula :: Pelicula() {
	genero = "";
}

Pelicula :: Pelicula(string genero, string horario) : Cartelera(horario) {
	this -> genero = genero;
}

string Pelicula :: getGenero() {
	return genero;
}

void Pelicula :: setGenero(string sgenero) {
	genero = sgenero;
}

/*string Peliculas::getTipoPelicula(string tipo){
	string validar = "ESTRENO";
	if (validar.compare(tipo) == 0){
		return "ESTRENO";
	} else {
		return "NORMAL";
	}
}*/