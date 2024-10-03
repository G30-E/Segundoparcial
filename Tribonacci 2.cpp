#include <iostream>
#include <vector>
using namespace std;

int main() {
    int totalFilas, totalColumnas;

    cout << "Ingrese el número de filas: ";
    cin >> totalFilas;

    cout << "Ingrese el número de columnas: ";
    cin >> totalColumnas;

    vector <vector<int> > tabla(totalFilas, vector<int>(totalColumnas));

    int filaActual = 0, columnaActual = 0;

    while (filaActual < totalFilas) {
        columnaActual = 0;
        while (columnaActual < totalColumnas) {
            cout << "Ingrese el valor para la posición [" << filaActual << "][" << columnaActual << "]: ";
            cin >> tabla[filaActual][columnaActual];
            columnaActual++;
        }
        filaActual++;
    }

    int totalPuntos = 0;
    filaActual = 0;

    while (filaActual < totalFilas) {
        columnaActual = 0;
        while (columnaActual < totalColumnas) {
            if (tabla[filaActual][columnaActual] == 5) {
                totalPuntos += 5;
            } else if (tabla[filaActual][columnaActual] % 2 == 0) {
                totalPuntos += 1;
            } else {
                totalPuntos += 3;
            }
            columnaActual++;
        }
        filaActual++;
    }

    cout << "Puntuación total: " << totalPuntos << endl;

    return 0;
}
