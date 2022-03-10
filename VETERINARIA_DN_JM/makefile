all: compilar
compilar: mascotaxpropietario mascota propietario sistema main
	g++ -o Salida MascotaxPropietario.o Mascota.o Propietario.o Sistema.o Main.o
mascotaxpropietario: MascotaxPropietario.cpp MascotaxPropietario.h Mascota.h Propietario.h
	g++ -c MascotaxPropietario.cpp 
mascota: Mascota.cpp Mascota.h
	g++ -c Mascota.cpp
propietario: Propietario.cpp Propietario.h
	g++ -c Propietario.cpp
sistema: Sistema.cpp Sistema.h MascotaxPropietario.h Propietario.h Mascota.h
	g++ -c Sistema.cpp
main: Main.cpp Sistema.h
	g++ -c main.cpp
clean: #Comando para borrar los o.
	@echo "Cleaning Compilation..."
	del *.o