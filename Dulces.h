#include "Dulceria.h"

#include <string>

#ifndef DULCES_H
#define DULCES_H

using namespace std;

class Dulces : public Dulceria{
	private:
		string clase;
	public:
		Dulces();
		Dulces(string, double);

		string getClase();
		void setClase(string);

		double getPrecio();
};
#endif