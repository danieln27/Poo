#include "Sistema.h"

void Sistema::agregarPropietario(string nombre, string email, int idP, int telefono){
    for( auto x:unmapPropietario ){
        if (idP == x.second.getId()){
            cout << "El numero de identificacion ya lo tiene otro propietario..." << endl;
            return;
        }
        
    }
    
    Propietario propietario(nombre, email, idP, telefono);
    unmapPropietario[idP] = propietario;
    cout << "Se registro exitosamente el propietario responsable..." << endl;
}

void Sistema::agregarMascota(string raza, string tipo, float peso, int edad, string tipoSangre, string nombre, int idM, bool status, string fMuerte){
    for( auto x:unmapMascota ){
        if (idM == x.second.getId()){
            cout << "El numero de identificacion ya lo tiene otra mascota..." << endl;
            return;
        }
        
    }
    
    Mascota mascota(raza, tipo, peso, edad, tipoSangre, nombre, idM, status, fMuerte);
    unmapMascota[idM] = mascota;
    cout << "Se registro exitosamente la mascota..." << endl;
}

void Sistema::modificarPropietario(int idP){
    int opc, tel, ide;
    string nom, ema;
    cout << "1) Nombre" << endl;
    cout << "2) Email" << endl;
    cout << "3) Identificacion" << endl;
    cout << "4) Telefono" << endl;
    cout << "Que dato desea modificar?: " << endl;
    cin >> opc;
    switch (opc)
        {
        case 1:
            cout << "Digite el nombre correspondiente: " ;
            cin >> nom;
            unmapPropietario[idP].setnombre(nom);
            break;
        case 2:
            cout << "Digite el email correspondiente: " ;
            cin >> ema;
            unmapPropietario[idP].setEmail(ema);
            break;
        case 3:
            cout << "Digite la identificacion correspondiente: " ;
            cin >> ide;
            unmapPropietario[idP].setId(ide);
            break;
        case 4:
            cout << "Digite el telefono correspondiente: " ;
            cin >> tel;
            unmapPropietario[idP].setTelefono(tel);
            break;
        default:
            break;
        }

}

void Sistema::eliminarPropietario(int idP){
    int cont = 0;
    for (int i = 0; i < vectorMasxPro.size(); i++){
        if ((idP == vectorMasxPro[i].getPropietario().getId())){
            cont++;
        }
    }
    if (cont >= 2){
        cout << "el propietario no se puede eliminar porque tiene 2 o mas mascotas" << endl;
    }
    else{
        unmapPropietario.erase(idP);
        cout << "Propietario eliminado correctamente..." << endl;
    }
}

void Sistema::listarPropietario(){
    for( auto x:unmapPropietario ){
        cout<< x.second.getNombre() << " con numero de identificacion " << x.first << endl;
    }
}

int Sistema::contarPropietariosRegistrados(){
    return unmapPropietario.size();

}

void Sistema::mostrarInfoPropietarios(int idP){
    unmapPropietario[idP].imprimirInfo();

}

void Sistema::mostrarInfoMascotas(int idM){
    unmapMascota[idM].imprimirInfo();

}

void Sistema::mostrarPropietariosXMascota(int idM){
    cout << "Esta mascota tiene los siguientes propietarios..." << endl;
    for (int i = 0; i < vectorMasxPro.size(); i++){
        if (vectorMasxPro[i].getMascota().getId() == idM){
            vectorMasxPro[i].getPropietario().imprimirInfo();
        }
        
    }

}

void Sistema::mostrarMascotasXPropietario(int idP){
    cout << "Este propietario tiene las siguientes mascotas..." << endl;
    for (int i = 0; i < vectorMasxPro.size(); i++){
        if (vectorMasxPro[i].getPropietario().getId() == idP){
            vectorMasxPro[i].getMascota().imprimirInfo();
        }
        
    }

}

void Sistema::asociarMascota(int idP, int idM, int cont){

    for (int i = 0; i < vectorMasxPro.size(); i++){
        if ((vectorMasxPro[i].getMascota().getId() == idM) && (vectorMasxPro[i].getPropietario().getId() == idP)){
            cout << "Esta mascota ya esta asociada a este propietario" << endl;
            return;
        }
    }
    MascotaxPropietario relacion(unmapMascota[idM],unmapPropietario[idP]);
    vectorMasxPro.push_back(relacion);
    cout << "se ha realiado la asociacion correctamente..." << endl;

}

void Sistema::asociarPropietarioMascota(int idP, int idM, int cont){
    for (int i = 0; i < vectorMasxPro.size(); i++){
        if ((vectorMasxPro[i].getMascota().getId() == idM) && (vectorMasxPro[i].getPropietario().getId() == idP)){
            cout << "Este propietario ya esta asociado a esta mascota" << endl;
            return;
        }
        
    }
    MascotaxPropietario relacion(unmapMascota[idM],unmapPropietario[idP]);
    vectorMasxPro.push_back(relacion);
    cout << "se ha realiado la asociacion correctamente..." << endl;

}

void Sistema::cambiarStatusMascota(int idM, bool status){
    unmapMascota[idM].setStatus(status);
    cout << "Status cambiado correctamente..." << endl;

}

void Sistema::eliminarPropietarioDeMascota(int idM, int idP){
    
    for (int i = 0; i < vectorMasxPro.size(); i++){
        if ((vectorMasxPro[i].getMascota().getId() == idM) && (vectorMasxPro[i].getPropietario().getId() == idP)){
            while (i < vectorMasxPro.size()){
                vectorMasxPro[i] = vectorMasxPro[i + 1];
                i++;
                
            }
            break;
        }
        
    }
    cout << "Propietario fue eliminado de la mascota..." << endl;

}





