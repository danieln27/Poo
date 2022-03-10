#include "MascotaxPropietario.h"

MascotaxPropietario::MascotaxPropietario(){

}
MascotaxPropietario::MascotaxPropietario(Mascota mascota, Propietario propietario){
    this->mascota = mascota;
    this->propietario = propietario;
}
Mascota MascotaxPropietario::getMascota(){
    return mascota;
}
Propietario MascotaxPropietario::getPropietario(){
    return propietario;
}