#include "Pelicula.h"

using namespace std;

Pelicula :: Pelicula() {

}

Pelicula :: Pelicula(string genero, string horario) {
	this -> genero = genero;
	this -> horario = horario;
}

string Pelicula :: getGenero() {
	return genero;
}

void Pelicula :: setGenero(string genero) {
	this -> genero = genero;
}

string Pelicula :: getHorario(){
	return horario;
}

void Pelicula :: setHorario(string horario){
	this -> horario = horario;
}