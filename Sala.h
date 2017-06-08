#include <string>

#ifndef SALA_H
#define SALA_H
 
using namespace std;

class Sala {
	private:
		int numero;
	public:
		Sala();
		Sala(int);
		int getNumero();
		string tipoSala(string);
};
#endif