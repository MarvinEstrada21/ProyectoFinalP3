#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include "Persona.h"

using namespace std;

class Empleado : public Persona {
	private:
		string horario_trabajo;
		double salario;
	public:
		Empleado();
		Empleado(string, double, string, int, string);

		string getHorario_Trabajo();
		void setHorario_Trabajo(string);

		double getSalario();
		void setSalario(double);

		virtual string getRol();
}; 
#endif