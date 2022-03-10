#include <iostream>
#include "Sistema.h"

using std::cin;
using std::cout;
using std::string;

void menu(Sistema sistema){
    string nombre, email, muerte, tipoSangre, tipo, raza;
    int opc, telefono, ide, ideM, edad, cont = 0;
    float peso;
    bool status;

    do
    {
        cout << "Bienvenidos al directorio telefonico de la veterinaria.    \n";
        cout << "1. Agregar propietario \n";
        cout << "2. Agregar mascota \n";
        cout << "3. Modificar propietario \n";
        cout << "4. Eliminar propietario \n";
        cout << "5. Listar propietarios \n";
        cout << "6. Contar propietarios registrados \n";
        cout << "7. Mostrar informacion propietario registrado \n";
        cout << "8. Mostrar informacion mascota registrada \n";
        cout << "9. Mostrar propietarios por mascota \n";
        cout << "10. Mostrar mascotas por propietario \n";
        cout << "11. Asociar mascota a propietario \n";
        cout << "12. Asociar propietario a mascota \n";
        cout << "13. Cambiar status a mascota (viva - muerta) \n";
        cout << "14. Eliminar propietario de mascota  \n";
        cout << "0. Salir \n";
        
        cout << "\n";
        cin >> opc;
        cout << "\n";

        switch (opc)
        {
        case 1: 
            cout << "Ingrese el nombre del Propietario: ";
            cin >> nombre;
            cout << "Ingrese el email del Propietario: ";
            cin >> email;
            cout << "Ingrese la identificacion del Propietario: ";
            cin >> ide;
            cout << "Ingrese el telefono del Propietario: ";
            cin >> telefono;
            sistema.agregarPropietario(nombre, email, ide, telefono);
            break;

        case 2:
            cout << "Ingrese la raza de la mascota: ";
            cin >> raza;
            cout << "Ingrese el tipo de la mascota: ";
            cin >> tipo;
            cout << "Ingrese el peso de la mascota: ";
            cin >> peso;
            cout << "Ingrese la edad de la mascota: ";
            cin >> edad;
            cout << "Ingrese el tipo de sangre de la mascota: ";
            cin >> tipoSangre;
            cout << "Ingrese el nombre de la mascota: ";
            cin >> nombre;
            cout << "Ingrese la identificacion de la mascota: ";
            cin >> ide;
            cout << "Ingrese el status de la mascota: ";
            cin >> status;
            cout << "Ingrese la fecha de muerte de la mascota: ";
            cin >> muerte;
            sistema.agregarMascota(raza, tipo, peso, edad, tipoSangre, nombre, ide, status, muerte);
            break;

        case 3:
            cout << "ingrese el numero de identificacion: ";
            cin >> ide;
            sistema.modificarPropietario(ide);
            break;

        case 4:
            cout << "ingrese el numero de identificacion: ";
            cin >> ide;
            sistema.eliminarPropietario(ide);
            cout << "\n";
            break;

        case 5:
            cout << "Estan registrados los siguientes propietarios..." << endl;
            sistema.listarPropietario();
            break;

        case 6:
            cout << "hay " << sistema.contarPropietariosRegistrados() << " propietarios registrados" << endl;
            break;

        case 7:
            cout << "ingrese el numero de identificacion del propietario que desea conocer: ";
            cin >> ide;
            sistema.mostrarInfoPropietarios(ide);
            cout << "\n";
            break;

        case 8:
            cout << "ingrese el numero de identificacion de la mascota que desea conocer: ";
            cin >> ide;
            sistema.mostrarInfoMascotas(ide);
            cout << "\n";
            break;

        case 9:
            cout << "ingrese la identificacion de la mascota que desea conocer sus propietarios: ";
            cin >> ide;
            sistema.mostrarPropietariosXMascota(ide);
            break;
        
        case 10:
            cout << "ingrese la identificacion del propietario que desea conocer sus mascotas: ";
            cin >> ide;
            sistema.mostrarMascotasXPropietario(ide);
            break;

        case 11:
            cout << "ingrese la identificacion del propietario que desea asociar a la mascota: ";
            cin >> ide;
            cout << "ingrese la identificacion de la mascota: ";
            cin >> ideM;
            sistema.asociarMascota(ide, ideM, cont);
            cont++;
            break;

        case 12:
            cout << "ingrese la identificacion de la mascota que desea asociar al propietario: ";
            cin >> ideM;
            cout << "ingrese la identificacion del propietario: ";
            cin >> ide;
            sistema.asociarPropietarioMascota(ide, ideM, cont);
            cont++;
            break;

        case 13:
            cout << "ingrese la identificacion de la mascota que desea cambiar el status: ";
            cin >> ideM;
            cout << "ingrese el status de la mascota (1. viva - 0. muerta): ";
            cin >> status;
            sistema.cambiarStatusMascota(ideM, status);
            break;

        case 14:
            cout << "ingrese la identificacion de la mascota que desea eliminarle el propietario: ";
            cin >> ideM;
            cout << "ingrese la identificacion del propietario: ";
            cin >> ide;
            sistema.eliminarPropietarioDeMascota(ideM, ide);
            cont--;
            break;

        default:
            break;
        }
    } while (opc != 0);
}

int main()
{
    Sistema sistema;

    menu(sistema);

    return 0;
}