#include "Mascota.h"

Mascota::Mascota(){
    this->status = true;
}

Mascota::Mascota(string raza, string tipo, float peso, int edad, string tipoSangre, string nombre, int idM, bool status, string fMuerte ){
    this->raza = raza;
    this->tipo = tipo;
    this->peso = peso;
    this->edad = edad;
    this->tipoSangre = tipoSangre;
    this->nombre = nombre;
    this->idM = idM;
    this->status = status;
    this->fMuerte = fMuerte;
}

void Mascota::setStatus(bool status){
    this->status = status;
}

int Mascota::getId(){
    return idM;
}

void Mascota::imprimirInfo(){
    cout << "La raza es " << raza << endl;
    cout << "El tipo es " << tipo << endl;
    cout << "El peso es " << peso << endl;
    cout << "La edad es " << edad << endl;
    cout << "El tipo de sangre es " << tipoSangre << endl;
    cout << "El nombre es " << nombre << endl;
    cout << "La identificacion es " << idM << endl;
    cout << "El estatus es (1 vivo - 0 muerto): " << status << endl;
    cout << "La fecha de la muerte es: " << fMuerte << endl;
}
//gets y sets