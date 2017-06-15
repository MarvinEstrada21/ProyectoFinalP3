#include "Persona.h"

using namespace std;

Persona :: Persona() {
	nombre = "";
	edad = 0;
	id = "";
}

Persona :: Persona(string nombre, int edad, string id) {
	this -> nombre = nombre;
	this -> edad = edad;
	this -> id = id;
}

string Persona :: getNombre() {
	return nombre;
}

void Persona :: setNombre(string sNombre) {
	nombre = sNombre;
}

int Persona :: getEdad() {
	return edad;
}

void Persona :: setEdad(int sEdad) {
	edad = sEdad;
}

string Persona :: getId() {
	return id;
}

void Persona :: setId(string sId) {
	id = sId;
}