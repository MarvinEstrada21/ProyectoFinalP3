Main:	Main.o Administrador.o Cartelera.o Cine.o Cliente.o Comida.o Dulceria.o Dulces.o Empleado.o Palomitas.o Pelicula.o Persona.o Refresco.o Sala.o Taquilla.o Trabajador.o
	g++ Main.o Administrador.o Cartelera.o Cine.o Cliente.o Comida.o Dulceria.o Dulces.o Empleado.o Palomitas.o Pelicula.o Persona.o Refresco.o Sala.o Taquilla.o Trabajador.o -o Main

Main.o:	Main.cpp Cine.h
	g++ -c Main.cpp

Cine.o:	Cine.cpp Cine.h Administrador.h Cartelera.h Cliente.h Comida.h Dulceria.h Dulces.h Empleado.h Palomitas.h Pelicula.h Persona.h Refresco.h Sala.h Taquilla.h Trabajador.h
	g++ -c Cine.cpp

Administrador.o:	Administrador.cpp Administrador.h Empleado.h
	g++ -c Administrador.cpp

Cartelera.o:	Cartelera.cpp Cartelera.h Pelicula.h
	g++ -c Cartelera.cpp

Cliente.o:	Cliente.cpp Cliente.h Persona.h
	g++ -c Cliente.cpp

Comida.o:	Comida.cpp Comida.h Dulceria.h
	g++ -c Comida.cpp

Dulceria.o:	Dulceria.cpp Dulceria.h
	g++ -c Dulceria.cpp

Dulces.o:	Dulces.cpp Dulces.h Dulceria.h
	g++ -c Dulces.cpp

Empleado.o:	Empleado.cpp Empleado.h Persona.h
	g++ -c Empleado.cpp

Palomitas.o:	Palomitas.cpp Palomitas.h Dulceria.h
	g++ -c Palomitas.cpp

Pelicula.o:	Pelicula.cpp Pelicula.h
	g++ -c Pelicula.cpp

Persona.o:	Persona.cpp Persona.h
	g++ -c Persona.cpp

Refresco.o:	Refresco.cpp Refresco.h Dulceria.h
	g++ -c Refresco.cpp

Sala.o:	Sala.cpp Sala.h Pelicula.h
	g++ -c Sala.cpp

Taquilla.o: Taquilla.cpp Taquilla.h
	g++ -c Taquilla.cpp
	
Trabajador.o:	Trabajador.cpp Trabajador.h Empleado.h
	g++ -c Trabajador.cpp


clean:
	rm -f *.o Main