#include "Cliente.h"

using namespace std;

Cliente :: Cliente() : Persona() {
	dinero = 0;
}

Cliente :: Cliente(double dinero, string nombre, int edad, string id) {
	this -> dinero = dinero;
}

double Cliente :: getDinero() {
	return dinero;
}

void Cliente :: setDinero(double dinero) {
	this -> dinero = dinero;
}