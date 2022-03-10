#ifndef MASCOTA_H
#define MASCOTA_H


#include <iostream>
#include <vector>

using namespace std;

class Mascota{
private:
    string raza;
    string tipo;
    float peso;
    int edad;
    string tipoSangre;
    string nombre;
    int idM;
    bool status;
    string fMuerte; 
public:
    Mascota();
    Mascota(string raza, string tipo, float peso, int edad, string tipoSangre, string nombre, int idM, bool status, string fMuerte );
    void setStatus(bool status);
    int getId();
    void imprimirInfo();
};

#endif // MASCOTA_H