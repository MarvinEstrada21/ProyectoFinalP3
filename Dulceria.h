#include <string>

#ifndef DULCERIA_H
#define DULCERIA_H

using namespace std;

class Dulceria {
	protected:
		double precio;
	public:
		Dulceria();
		Dulceria(double);

		virtual double getPrecio();
		//virtual string getTamaño()=0;
};
#endif