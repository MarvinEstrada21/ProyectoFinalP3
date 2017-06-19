#include <string>

#ifndef PERSONA_H
#define PERSONA_H

using namespace std;

class Persona{
	protected:
		string nombre;
		int edad;
		string id;
	public:
		Persona();
		Persona(string, int, string);

		string getNombre();
		void setNombre(string);

		int getEdad();
		void setEdad(int);

		string getId();
		void setId(string);

		//virtual string getDescuento()=0;
};
#endif