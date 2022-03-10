#ifndef PROPIETARIO_H
#define PROPIETARIO_H


#include <iostream>

using namespace std;

class Propietario{
private:
    string nombre;
    string email;
    int idP;
    int telefono;
public:
    Propietario();
    Propietario(string nombre, string email, int idP, int telefono);
    int getId();
    string getNombre();
    void setnombre(string nombre);
    void setEmail(string email);
    void setId(int idP);
    void setTelefono(int telefono);
    void imprimirInfo();
};

#endif // PROPIETARIO_H