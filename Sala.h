#include <string>
#include "Pelicula.h"

#ifndef SALA_H
#define SALA_H
 
using namespace std;

class Sala {
	private:
		int numero;
		Pelicula* pelicula;
	public:
		Sala();
		Sala(int);
		int getNumero();
		void setNumero(int);
		string tipoSala(string);
};
#endif