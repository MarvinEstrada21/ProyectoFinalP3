#include <string>
#include "Pelicula.h"
#include <vector>

#ifndef CARTELERA_H
#define CARTELERA_H

using namespace std;

class Cartelera : public Pelicula {
	private:
		vector <Pelicula*> lista_peliculas;
		string formato;
	public:	
		Cartelera();
		Cartelera(vector <Pelicula*>, string, string, string);

		string getFormato();
		void setFormato(string);

		~Cartelera();
};
#endif