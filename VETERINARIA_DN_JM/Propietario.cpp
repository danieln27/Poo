#include "Propietario.h"

Propietario::Propietario(){

}

Propietario::Propietario(string nombre, string email, int idP, int telefono){
    this->nombre = nombre;
    this->email = email;
    this->idP = idP;
    this->telefono = telefono;
}

int Propietario::getId(){
    return idP;
}

string Propietario::getNombre(){
    return nombre;
}

void Propietario::setnombre(string nombre){
    this->nombre = nombre;
}

void Propietario::setEmail(string email){
    this->email = email;
}

void Propietario::setId(int idP){
    this->idP = idP;
}

void Propietario::setTelefono(int telefono){
    this->telefono = telefono;
}

void Propietario::imprimirInfo(){
    cout << "El nombre es " << nombre << endl;
    cout << "El email es " << email << endl;
    cout << "La identificacion es " << idP << endl;
    cout << "El telefono es " << telefono << endl;
}
//gets y sets