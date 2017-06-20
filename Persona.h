#include <string>
#include <fstream>
#include <sstream>
#include <iostream> 

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

		friend ostream& operator<<(ostream& escribir, Persona& p) {
			string texto = "";
			stringstream text;
			text << "Nombre: " << p.getNombre() << ", Edad: " << p.getEdad() << ", ID: " << p.getId();
			texto = text.str();
			return escribir << texto;
		}
		//virtual string getDescuento()=0;
};
#endif