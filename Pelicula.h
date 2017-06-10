#include "Cartelera.h"
#include <string>

#ifndef PELICULA_H
#define PELICULA_H

using namespace std;

class Pelicula : public Cartelera{
	private:
		string genero;
	public:
		Pelicula();
		Pelicula(string, string);
		//genero, horario
		string getGenero();
		void setGenero(string);
		//string getTipoPelicula(string);
};
#endif