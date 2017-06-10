#include "Dulceria.h"

#include <string>

#ifndef COMIDA_H
#define COMIDA_H

using namespace std;

class Comida : public Dulceria {
	private:
		string platillo;
	public:
		Comida();
		Comida(string, double);

		string getPlatillo();
		void setPlatillo(string);

		double getPrecio();
};
#endif