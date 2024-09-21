#include <iostream>
#include <string>

using namespace std;

enum Estacion {
    PRIMAVERA,
    VERANO,
    OTONNO,
    INVIERNO,
    NUM_ESTACION
};

string obtenerNombreEstacion (Estacion estacion) {
    switch(estacion) {
        case PRIMAVERA: return "Primavera";
        case VERANO: return "Verano";
        case OTONNO: return "Otonno";
        case INVIERNO: return "Invierno";
        default: return "Desconocido";
    }
}

int main() {
    int eleccion;

    cout << "Seleccione una estacion del año:" << endl;
    cout << "0. Primavera" << endl;
    cout << "1. Verano" << endl;
    cout << "2. Otonno" << endl;
    cout << "3. Invierno" << endl;

    cout << "Ingrese el número correspondiente a la estacion: ";
    cin >> eleccion;

    if (eleccion < 0 || eleccion >= NUM_ESTACION) {
        cout << "Opción inválida." << endl;
    } else {
        Estacion estacionseleccionada = static_cast<Estacion>(eleccion);
        cout << "Has seleccionado : " << obtenerNombreEstacion(estacionseleccionada) << endl;
    }

    return 0;
}
