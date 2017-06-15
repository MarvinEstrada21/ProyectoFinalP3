#include "Empleado.h"

using namespace std;

Empleado :: Empleado() : Persona() {
	horario_trabajo = "";
	salario = 0;
}

Empleado :: Empleado(string horario_trabajo, double salario, string nombre, int edad, string id) : Persona(nombre, edad, id) {
	this -> horario_trabajo = horario_trabajo;
	this -> salario = salario;
}

string Empleado :: getHorario_Trabajo() {
	return horario_trabajo;
}

void Empleado :: setHorario_Trabajo(string horario_trabajo) {
	this -> horario_trabajo = horario_trabajo;
}

double Empleado :: getSalario() {
	return salario;
}

void Empleado :: setSalario(double salario) {
	this -> salario = salario;
}

string Empleado :: getRol() {
	return "";
}