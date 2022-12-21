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
const unsigned NUM_MEDIAS = 4;
const unsigned DATOS_POR_MEDIA = NUM_HORAS / NUM_MEDIAS;

/*
* Pre: ......
* Post: Ha calculado «NUM_MEDIAS» medias a partir de los datos del vector «caudales»
* que ha almacenado en el vector «medias». La primera componente del vector
* «medias» es la media de las primeras DATOS_POR_MEDIA componentes del vector
* «caudales», la segunda componente del vector «medias» es la media de las
* siguientes DATOS_POR_MEDIA componentes de «caudales», y así sucesivamente.
*/
void calcularMedias(unsigned caudales[], double medias[]){
    // Recorremos el vector de caudales hasta DATOS_POR_MEDIA y acumulamos en la misma
    // posición del vector media
    for (unsigned i = 0; i < NUM_MEDIAS; i++) {
        unsigned suma = 0;
        for (unsigned j = 0; j < DATOS_POR_MEDIA; j++) {
            suma += caudales[DATOS_POR_MEDIA * i + j];
        }
        medias[i] = double(suma) / DATOS_POR_MEDIA;
    }

}