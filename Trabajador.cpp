#include "Trabajador.h"

using namespace std;

Trabajador :: Trabajador() : Empleado() {
	puesto = "";
}

Trabajador :: Trabajador(string puesto, string horario_trabajo, double salario, string nombre, int edad, string id) : Empleado(horario_trabajo, salario, nombre, edad, id) {
	this -> puesto = puesto;
}

string Trabajador :: getPuesto() {
	return puesto;
}

void Trabajador :: setPuesto(string puesto) {
	this -> puesto = puesto;
}

string Trabajador :: getRol() {
	Empleado :: getRol();
	return "Trabajador";
}