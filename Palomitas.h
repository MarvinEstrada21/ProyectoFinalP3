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

		string getTamano();
		void setTamano(string);

		string getSabor();
		void setSabor(string);

		double getPrecio();
};
#endif