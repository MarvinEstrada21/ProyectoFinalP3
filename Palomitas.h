#include <string>
#include "Dulceria.h"

#ifndef PALOMITAS_H
#define PALOMITAS_H

using namespace std;

class Palomitas : public Dulceria {
	private:
		string tamano;
		string sabor;
	public:
		Palomitas();
		Palomitas(string, string, double);

		double getPrecio(string);
		
};
#endif