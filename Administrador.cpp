#include "Administrador.h"

using namespace std;

Administrador :: Administrador() : Empleado() {
	cant_trab = 0;
}

Administrador :: Administrador(int cant_trab, string horario_trabajo, double salario, string nombre, int edad, string id) : Empleado(horario_trabajo, salario, nombre, edad, id) {
	this -> cant_trab = cant_trab;
}

int Administrador :: getCant_Trab() {
	return cant_trab;
}

void Administrador :: setCant_Trab(int cant_trab) {
	this -> cant_trab = cant_trab;
}

string Administrador :: getRol() {
	Empleado :: getRol();
	return "Administrador";
}