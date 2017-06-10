#include "Sala.h"

using namespace std;

Sala :: Sala() {
	numero = 0;
	pelicula = new Pelicula();
}

Sala :: Sala(int numero) {
	this -> numero = numero;
}

int Sala :: getNumero() {
	return numero;
}

void Sala :: setNumero(int sNumero) {
	numero = sNumero;
}

string Sala :: tipoSala(string tipo) {
	if (tipo.compare("VIP") == 0) {
		return "VIP";
	} else {
		return "Normal";
	}
}