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

double Palomitas :: getPrecio(string tipo) {
	return precio;
}