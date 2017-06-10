#include "Dulceria.h"
#include <string>

using namespace std;

Dulceria :: Dulceria() {
	precio = 0;
}

Dulceria :: Dulceria(double precio) {
	this -> precio = precio;
}

double Dulceria :: getPrecio() {
	return precio;
}