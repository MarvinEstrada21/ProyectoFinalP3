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

double Refresco :: getPrecio(string tipo) {
	return precio;
}