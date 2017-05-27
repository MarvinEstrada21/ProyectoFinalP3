#include "Peliculas.h"

using namespace std;

Peliculas::Peliculas(string genero, string horario) : Cartelera(horario){
	this -> genero = genero;
}

string Peliculas::getGenero(){
	return genero;
}

void Peliculas::setGenero(string sgenero){
	genero = sgenero;
}

string Peliculas::getTipoPelicula(string tipo){
	string validar = "ESTRENO";
	if (validar.compare(tipo) == 0){
		return "ESTRENO";
	} else {
		return "NORMAL";
	}
}