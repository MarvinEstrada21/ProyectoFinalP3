#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include "Empleado.h"
#include <string>

using namespace std;

class Administrador : public Empleado {
	private:
		int cant_trab;
	public:
		Administrador();
		Administrador(int, string, double, string, int, string);

		int getCant_Trab();
		void setCant_Trab(int);

		string getRol();
};
#endif 