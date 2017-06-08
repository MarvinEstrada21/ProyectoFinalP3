#include "Cartelera.h"

using namespace std;

Cartelera::Cartelera(){
	horario = "";
}

Cartelera::Cartelera(string horario){
	this -> horario = horario;
}

string Cartelera::getHorario(){
	return horario;
}

void Cartelera::setHorario(string shorario){
	horario = shorario;
}

/*string getTipoPelicula(string tipo){
	return "";
}*/