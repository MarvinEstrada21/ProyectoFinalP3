Main:	Main.o Cartelera.o Comida.o Dulceria.o Dulces.o Palomitas.o Pelicula.o Persona.o Refresco.o Sala.o
	g++ Main.o Cartelera.o Comida.o Dulceria.o Dulces.o Palomitas.o Pelicula.o Persona.o Refresco.o Sala.o -o Main

Main.o:	Main.cpp Cartelera.h Dulceria.h Dulces.h Palomitas.h Pelicula.h Persona.h Refresco.h Sala.h
	g++ -c Main.cpp

Cartelera.o:	Cartelera.cpp Cartelera.h
	g++ -c Cartelera.cpp

Comida.o:	Comida.cpp Comida.h Dulceria.h
	g++ -c Comida.cpp

Dulceria.o:	Dulceria.cpp Dulceria.h
	g++ -c Dulceria.cpp

Dulces.o:	Dulces.cpp Dulces.h Dulceria.h
	g++ -c Dulces.cpp

Palomitas.o:	Palomitas.cpp Palomitas.h Dulceria.h
	g++ -c Palomitas.cpp

Pelicula.o:	Pelicula.cpp Pelicula.h Cartelera.h
	g++ -c Pelicula.cpp

Persona.o:	Persona.cpp Persona.h
	g++ -c Persona.cpp

Refresco.o:	Refresco.cpp Refresco.h Dulceria.h
	g++ -c Refresco.cpp

Sala.o:	Sala.cpp Sala.h Pelicula.h
	g++ -c Sala.cpp


clean:
	rm -f *.o Main