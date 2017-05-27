#ifndef CARTELERA_H
#define CARTELERA_H
#include <string>

using namespace std;

class Cartelera{
	protected:
		string horario;
	public:	
		Cartelera(string);
		string getHorario();
		void setHorario(string);
		virtual string getTipoPelicula(string);
};

#endif