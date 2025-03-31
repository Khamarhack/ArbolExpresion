/*******************************************
Fecha: 26 marzo 2025
Autor: Santiago Camargo
Tema: Taller Arboles
Estructuras de datos
******************************************/
#ifndef NODOEXPRESION_H
#define NODOEXPRESION_H

#include <string.h>
using namespace std;

/**
 * Clase que representa un nodo en un árbol de expresión matemática.
 */
class NodoExpresion {
protected:
    char dato; ///< Valor del nodo (operando u operador).
    bool operando; ///< Indica si es un operando (true) o un operador (false).
    NodoExpresion *hijoIzq; ///< Puntero al hijo izquierdo.
    NodoExpresion *hijoDer; ///< Puntero al hijo derecho.

public:
    // Constructor: inicializa el nodo vacío
    NodoExpresion();
    
    // Destructor: libera la memoria del nodo
    ~NodoExpresion();

    // Obtiene el valor del nodo
    char getDato();
    
    // Establece el valor del nodo
    void setDato(char val);

    // Define si el nodo es un operando
    void setOperando(bool op);
    
    // Retorna si el nodo es un operando
    bool getOperando();

    // Obtiene el hijo izquierdo
    NodoExpresion* getHijoIzq();
    
    // Obtiene el hijo derecho
    NodoExpresion* getHijoDer();

    // Establece el hijo izquierdo
    void setHijoIzq(NodoExpresion* izq);
    
    // Establece el hijo derecho
    void setHijoDer(NodoExpresion* der);
};

#include "NodoExpresion.hxx"

#endif // NODOEXPRESION_H

