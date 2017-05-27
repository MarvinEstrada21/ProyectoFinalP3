#include <string>

#ifndef PERSONAS_H
#define PERSONAS_H

class Personas{
	protected:
		string nombre;
		int edad;
		string id;
	public:
		Personas(string, int, string);

		string getNombre();
		void setNombre(string);

		int getEdad();
		void setEdad();

		string getId();
		void setId();
};
#endif