#include "Refresco.h"

#include <string>

using namespace std;

Refresco :: Refresco() : Dulceria() {
	tamano = "";
	sabor = "";
}

Refresco :: Refresco(string tamano, string sabor, double precio) : Dulceria(precio) {
	this -> tamano = tamano;
	this -> sabor = sabor;
}

string Refresco :: getTamano() {
	return tamano;
}

void Refresco :: setTamano(string tamano) {
	this -> tamano = tamano;
}

string Refresco :: getSabor() {
	return sabor;
}

void Refresco :: setSabor(string sabor) {
	this -> sabor = sabor;
}

double Refresco :: getPrecio() {
	if (tamano == "P" || tamano == "p") {
		precio = 20.00;
	} else if (tamano == "M" || tamano == "m") {
		precio = 35.50;
	} else if (tamano == "G" || tamano == "g") {
		precio = 50.00;
	} else {
		precio = 0;
	}
	return precio;
}