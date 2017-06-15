#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include "Empleado.h"
#include <string>

using namespace std;

class Trabajador : public Empleado {
	private:
		string puesto;
	public:
		Trabajador();
		Trabajador(string, string, double, string, int, string);

		string getPuesto();
		void setPuesto(string);

		string getRol();
};
#endif