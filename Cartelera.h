#include <string>

#ifndef CARTELERA_H
#define CARTELERA_H

using namespace std;

class Cartelera{
	protected:
		string horario;
	public:	
		Cartelera();
		Cartelera(string);
		string getHorario();
		void setHorario(string);
		//virtual string getTipoPelicula(string);
};
#endif