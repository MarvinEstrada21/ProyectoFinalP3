#include <string>

#ifndef TAQUILLA_H
#define TAQUILLA_H

class Taquilla {
	private:
		double precio;
	public:
		Taquilla();
		Taquilla(double);

		double getPrecio(char[], int);
		//virtual string getTipo() = 0;

};
#endif