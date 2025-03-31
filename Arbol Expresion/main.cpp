/*******************************************
Fecha: 26 marzo 2025
Autor: Santiago Camargo
Tema: Taller Arboles
Estructuras de datos
******************************************/
#include <iostream>
#include "ArbolExpresion.h"
#include "NodoExpresion.h"
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    // Ejercicio 1: Construcción y evaluación de un árbol de expresión prefija
    cout << "EJERCICIO 1" << endl;
    cout << "\n1. Construir Árbol Expresión:" << endl;
    cout << "-*/5-7+113-+2+1*43*2-68" << endl;
    
    ArbolExpresion* arbexp = new ArbolExpresion();
    string exp = "-*/5-7+113-+2+1*43*2-68";
    arbexp->llenarDesdePrefija(exp);

    cout << "2. Imprimir Versión Posfija =" << endl;
    arbexp->obtenerPosfija(arbexp->getRaiz());
    cout << endl;

    cout << "3. Imprimir Resultado =" << endl;
    cout << arbexp->evaluar(arbexp->getRaiz()) << endl;

    // Ejercicio 2: Construcción y evaluación de un árbol de expresión posfija
    cout << "\nEJERCICIO 2" << endl;
    cout << "\n1. Construir Árbol Expresión:" << endl;
    cout << "45+23+*6+87+/12+3*6+23+/*" << endl;

    ArbolExpresion* arbexp2 = new ArbolExpresion();
    string exp2 = "45+23+*6+87+/12+3*6+23+/*";
    arbexp2->llenarDesdePosfija(exp2);

    cout << "2. Imprimir Versión Prefija =" << endl;
    arbexp2->obtenerPrefija(arbexp2->getRaiz());
    cout << endl;

    cout << "3. Imprimir Resultado =" << endl;
    cout << arbexp2->evaluar(arbexp2->getRaiz()) << endl;

    return 0; // Retorno correcto de la función main
}
