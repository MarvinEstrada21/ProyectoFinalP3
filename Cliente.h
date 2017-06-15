#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"
#include <string>

using namespace std;

class Cliente : public Persona {
	private:
		double dinero;
	public:
		Cliente();
		Cliente(double, string, int, string);

		double getDinero();
		void setDinero(double);
};
#endif