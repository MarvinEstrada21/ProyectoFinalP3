#include "Sala.h"

using namespace std;

Sala :: Sala() {
	numero = 0;
}

Sala :: Sala(int numero) {
	this -> numero = numero;
}

int Sala :: getNumero() {
	return numero;
}

string Sala :: tipoSala(string tipo) {
	if (tipo.compare("VIP") == 0) {
		return "VIP";
	} else {
		return "Normal";
	}
}