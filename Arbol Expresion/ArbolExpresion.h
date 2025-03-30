/*******************************************
Fecha: 26 marzo 2025
Autor: Santiago Camargo
Tema: Taller Arboles
Estructuras de datos
******************************************/
#ifndef ARBOLEXPRESION_H
#define ARBOLEXPRESION_H

#include "NodoExpresion.h"
#include <string>

using namespace std;

/**
 * Clase que representa un árbol de expresión matemática.
 * Permite construir el árbol desde expresiones prefijas o posfijas,
 * evaluarlo y obtener sus representaciones en distintas notaciones.
 */
class ArbolExpresion {
protected:
    NodoExpresion* raiz; // Raíz del árbol

public:
    // Constructor: inicializa el árbol vacío
    ArbolExpresion();
    
    // Destructor: libera la memoria del árbol
    ~ArbolExpresion();

    // Retorna la raíz del árbol
    NodoExpresion* getRaiz();

    // Establece la raíz del árbol
    void setRaiz(NodoExpresion* nod);

    // Construye el árbol desde una expresión en notación prefija
    void llenarDesdePrefija(string &expresion);

    // Construye el árbol desde una expresión en notación posfija
    void llenarDesdePosfija(string &expresion);

    // Muestra la expresión en notación prefija
    void obtenerPrefija(NodoExpresion* inicio);

    // Muestra la expresión en notación infija
    void obtenerInfija(NodoExpresion* inicio);

    // Muestra la expresión en notación posfija
    void obtenerPosfija(NodoExpresion* inicio);

    // Evalúa el valor de la expresión en el árbol
    int evaluar(NodoExpresion* nodi);

    // Verifica si un carácter es un operando (número o variable)
    bool siOperando(char car);
};

#include "ArbolExpresion.hxx"

#endif // ARBOLEXPRESION_H


