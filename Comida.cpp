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

double Comida :: getPrecio() {
	if (platillo == "hotdog" || platillo == "HotDog" || platillo == "Hotdog" || platillo == "hot dog" || platillo == "Hot dog" || platillo == "Hot Dog") {
		precio = 45.00;
	} else if (platillo == "nachos" || platillo == "Nachos") {
		precio = 37.50;
	} else if (platillo == "hamburguesa" || platillo == "Hamburguesa") {
		precio = 50.00;
	} else if (platillo == "panino" || platillo == "Panini") {
		precio = 55.00;
	} else {
		precio = 0;
	}
	if (platillo == "papas" || platillo == "Papas") {
		precio = 25.00;
	} else {
		precio = 0;
	}
	return precio;
}