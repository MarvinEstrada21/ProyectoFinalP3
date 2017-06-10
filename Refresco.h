#include "Dulceria.h"

#include <string>

#ifndef REFRESCO_H
#define REFRESCO_H

using namespace std;

class Refresco : public Dulceria {
	private:
		string tamano;
		string sabor;
	public:
		Refresco();
		Refresco(string, string, double);

		double getPrecio(string);
};
#endif