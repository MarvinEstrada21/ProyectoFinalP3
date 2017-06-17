#include <string>

#ifndef PELICULA_H
#define PELICULA_H

using namespace std;

class Pelicula {
	protected:
		string genero;
		string horario;
	public:
		Pelicula();
		Pelicula(string, string);

		string getGenero();
		void setGenero(string);

		string getHorario();
		void setHorario(string);
};
#endif