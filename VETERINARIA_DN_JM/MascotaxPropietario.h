#ifndef MASCOTAXPROPIETARIO_H
#define MASCOTAXPROPIETARIO_H


#include "Mascota.h"
#include "Propietario.h"

class MascotaxPropietario{
    
private:

    Mascota mascota;
    Propietario propietario;

public:

    MascotaxPropietario();
    MascotaxPropietario(Mascota mascota, Propietario propietario);
    Mascota getMascota();
    Propietario getPropietario();
};

#endif // MASCOTAXPROPIETARIO_H