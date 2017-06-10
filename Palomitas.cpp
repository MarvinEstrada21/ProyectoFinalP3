#include "Palomitas.h"

#include <string>

using namespace std;

Palomitas :: Palomitas() : Dulceria(){
	tamano = "";
	sabor = "";
}

Palomitas :: Palomitas(string tamano, string sabor, double precio) : Dulceria(precio) {
	this -> tamano = tamano;
	this -> sabor = sabor;
}

string Palomitas :: getTamano() {
	return tamano;
}

void Palomitas :: setTamano(string tamano) {
	this -> tamano = tamano;
}

string Palomitas :: getSabor() {
	return sabor;
}

void Palomitas :: setSabor(string sabor) {
	this -> sabor = sabor;
}

double Palomitas :: getPrecio() {
	if (tamano == "P" || tamano == "p") {
		if (sabor == "S" || sabor == "s") {
			precio = 35.00;
		} else {
			precio = 40.00;
		}
	} else if (tamano == "M" || tamano == "m") {
		if (sabor == "S" || sabor == "s") {
			precio = 50.25;
		} else {
			precio = 55.25;
		}
	} else if (tamano == "G" || tamano == "g") {
		if (sabor == "S" || sabor == "s") {
			precio = 65.50;
		} else {
			precio = 70.50;
		}
	} else {
		precio = 0;
	} 
	return precio;
}