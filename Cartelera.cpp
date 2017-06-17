#include "Cartelera.h"

using namespace std;

Cartelera :: Cartelera() : Pelicula() {

}

Cartelera :: Cartelera(vector <Pelicula*> lista_peliculas, string formato, string genero, string horario) : Pelicula(genero, horario) {
	this -> lista_peliculas = lista_peliculas;
	this -> horario = horario;
}

string Cartelera :: getFormato() {
	return formato;
}

void Cartelera :: setFormato(string formato) {
	this -> formato = formato;
}

Cartelera :: ~Cartelera() {

}