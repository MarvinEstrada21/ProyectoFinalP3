#include "Cartelera.h"
#include <string>
#ifndef PELICULAS_H
#define PELICULAS_H

using namespace std;

class Peliculas : public Cartelera{
	private:
		string genero;
	public:
		Peliculas(string, string);
		//genero, horario
		string getGenero();
		void setGenero(string);
		string getTipoPelicula(string);
};
#endif