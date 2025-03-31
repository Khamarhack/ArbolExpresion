/*******************************************
Fecha: 26 marzo 2025
Autor: Santiago Camargo
Tema: Taller Arboles
Estructuras de datos
******************************************/
#include "NodoExpresion.h"
#include <string>

using namespace std;

// Constructor: Inicializa los hijos en NULL
NodoExpresion::NodoExpresion() {
    this->hijoIzq = NULL;
    this->hijoDer = NULL;
}

// Destructor
NodoExpresion::~NodoExpresion() {
}

// Retorna el valor del nodo
char NodoExpresion::getDato() {
    return this->dato;
}

// Asigna un valor al nodo
void NodoExpresion::setDato(char val) {
    this->dato = val;
}

// Retorna el hijo izquierdo
NodoExpresion* NodoExpresion::getHijoIzq() {
    return this->hijoIzq;
}

// Retorna el hijo derecho
NodoExpresion* NodoExpresion::getHijoDer() {
    return this->hijoDer;
}

// Asigna un hijo izquierdo
void NodoExpresion::setHijoIzq(NodoExpresion* izq) {
    this->hijoIzq = izq;
}

// Define si el nodo es un operando
void NodoExpresion::setOperando(bool op) {
    this->operando = op;
}

// Retorna si el nodo es un operando
bool NodoExpresion::getOperando() {
    return this->operando;
}

// Asigna un hijo derecho
void NodoExpresion::setHijoDer(NodoExpresion* der) {
    this->hijoDer = der;
}

