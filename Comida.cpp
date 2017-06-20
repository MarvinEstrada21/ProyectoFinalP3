#include "Comida.h"

#include <string>

using namespace std;

Comida :: Comida() : Dulceria() {
	platillo = "";
}

Comida :: Comida(string platillo, double precio) : Dulceria(precio) {
	this -> platillo = platillo;
}

string Comida :: getPlatillo() {
	return platillo;
}

void Comida :: setPlatillo(string platillo) {
	this -> platillo = platillo;
}

double Comida :: getPrecio(char resp[1]) {
	if (resp[0] == '1') {
		precio = 45.00;
	} else if (resp[0] == '2') {
		precio = 37.50;
	} else if (resp[0] == '3') {
		precio = 50.00;
	} else if (resp[0] == '4') {
		precio = 55.00;
	} else if (resp[0] == '5') {
		precio = 25.00;
	} else {
		precio = 0;
	}
	return precio;
}