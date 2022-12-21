/*********************************************************************************************\
 * Programación 1. Problemas 10. Trabajo con strings
 * Autores: Antonio José González Almela
 * Ultima revisión: 15/12/2022
 * Resumen: 
\*********************************************************************************************/

#include <iostream>
#include <fstream>
#include <cctype>
#include <string>

using namespace std;

const char DELIMITADOR = ';';
const unsigned NUM_HORAS = 24;

int contarCaracteres(const string cadena, const char c) {
    unsigned contador = 0;
    for (unsigned i = 0; i < cadena.length(); i++) {
        if (cadena.at(i) == c) {
            contador++;
        }
    }
    return contador;
}

void escribeLínea(ifstream& f, ofstream& g) {
    string cadena;
    while(getline(f, cadena)) {
        if (contarCaracteres(cadena, DELIMITADOR) == NUM_HORAS) {
            g << cadena << endl;
        }
    }
}

bool copiaFicheroCorregido(const string nomFichero, const string nomCorregido) {
// 1. Abrir el flujo
ifstream f(nomFichero);
// 2. Comprobar si está abierto
if (f.is_open()) {
    // 2.1 hacer el trabajo
    // asociar flujo de salida
    ofstream g(nomCorregido);
    escribeLínea(f, g);
    if (g.is_open()) {
        // 2.2 Leer una si ínea y si corresponde escribirla
    } else {
        cout << "no se puede abrir el fichero de escritura" << endl;
        f.close();
    }
} else {
    cout << "Fichero de lectura no se puede abrir" << endl;
}
}