#ifndef SISTEMA_H
#define SISTEMA_H


#include <iostream>
#include "Propietario.h"
#include "Mascota.h"
#include "MascotaxPropietario.h"
#include <utility>
#include <unordered_map>
#include <iomanip>
#include <vector>

using namespace std;

class Sistema{
private:
    //Creacion de un mapa de propietarios
    unordered_map<int, Mascota> unmapMascota;
    unordered_map<int, Propietario> unmapPropietario;
    vector<MascotaxPropietario> vectorMasxPro;
    
public:
    void agregarPropietario(string nombre, string email, int idP, int telefono);
    void agregarMascota(string raza, string tipo, float peso, int edad, string tipoSangre, string nombre, int idM, bool status, string fMuerte);
    void modificarPropietario(int idP);
    void eliminarPropietario(int idP);
    void listarPropietario();
    int contarPropietariosRegistrados();
    void mostrarInfoPropietarios(int idP);
    void mostrarInfoMascotas(int idM);
    void mostrarPropietariosXMascota(int idM);
    void mostrarMascotasXPropietario(int idP);
    void asociarMascota(int idP, int idM, int cont);
    void asociarPropietarioMascota(int idP, int idM, int cont);
    void cambiarStatusMascota(int idM, bool status);
    void eliminarPropietarioDeMascota(int idM, int idP);
    
};

#endif // SISTEMA_H