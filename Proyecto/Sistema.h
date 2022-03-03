#include <iostream>
#include "Propietario.h"
#include <map>

using namespace std;

class Sistema{
private:
    //Creacion de un mapa de propietarios
public:
    void agregarPropietario();
    void modificarPropietario();
    void listarPropietario();
    void contarPropietariosRegistrados();
    void mostrarInfoPropietarios();
    void mostrarInfoMascotas();
    void mostrarPropietariosXMascota();
    void mostrarMascotasXPropietario();
    void asociarMascota();
    void asociarPropietarioMascota();
    void cambiarStatusMascota();
    void eliminarPropietarioDeMascota();
    void eliminarPropietario();
};