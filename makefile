Main:	Main.o Cartelera.o Pelicula.o Persona.o Sala.o
	g++ Main.o Cartelera.o Pelicula.o Persona.o Sala.o -o Main

Main.o:	Main.cpp Cartelera.h Pelicula.h Persona.h Sala.h
	g++ -c Main.cpp

Cartelera.o:	Cartelera.cpp Cartelera.h
	g++ -c Cartelera.cpp

Pelicula.o:	Pelicula.cpp Pelicula.h Cartelera.h
	g++ -c Pelicula.cpp

Persona.o:	Persona.cpp Persona.h
	g++ -c Persona.cpp

Sala.o:	Sala.cpp Sala.h
	g++ -c Sala.cpp


clean:
	rm -f *.o Main