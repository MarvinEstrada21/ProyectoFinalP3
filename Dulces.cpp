#include "Dulces.h"

#include <string>

using namespace std;

Dulces :: Dulces() : Dulceria() {
	clase = "";
}

Dulces :: Dulces(string clase, double precio) : Dulceria(precio) {
	this -> clase = clase;
}

string Dulces :: getClase() {
	return clase;
}

void Dulces :: setClase(string clase) {
	this -> clase = clase;
}

double Dulces :: getPrecio() {
	if (clase == "Chocolate" || clase == "chocolate") {
		precio = 30.00;
	} else if (clase == "Caramelo" || clase == "caramelo") {
		precio = 23.00;
	} else {
		precio = 0;
	}
	return precio;
}