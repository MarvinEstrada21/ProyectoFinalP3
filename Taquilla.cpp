#include "Taquilla.h"

Taquilla :: Taquilla() {

}

Taquilla :: Taquilla(double precio) {
	this -> precio = precio;
}

double Taquilla :: getPrecio(char resp[1], int cant) {
	if (resp[0] == '1') {
		precio = cant * 150.00;
	} else {
		precio = cant * 80;
	}
	return precio;
}