#include <iostream>
#include "myMatrix.h"
#include <iostream>
int main() {
    int m1_row = 0; //ancho columna
    int m1_col = 0;// alto fila
    int m2_row = 0; //ancho columna
    int m2_col = 0;// alto fila
    std::cout << "Ingresar Filas de m1: ";
    std::cin>> m1_row;
    std::cout << "Ingresar Columnas de m1: ";
    std::cin>> m1_col;
    std::cout << "Ingresar Filas de m2: ";
    std::cin>> m2_row;
    std::cout << "Ingresar Columnas de m2: ";
    std::cin>> m2_col;
    Mimatriz<int> m1(m1_row,m1_col);
    Mimatriz<int> m2(m2_row,m2_col);
    if(verifica(m1, m2)){
        std::cout << "Si se puede ejecutar la suma" << std::endl;
    }
    else{
        std::cout << "No Se puede ejecutar la suma" << std::endl;
        return 0;
    }
    std::cout << "Ingresar valores de la matriz m1 " << std::endl;
    m1.llenarMatriz();
    m1.mostrarMatriz();
    std::cout << "Ingresar valores de la matriz m2 " << std::endl;
    m2.llenarMatriz();
    m2.mostrarMatriz();
    std::cout << "Ejecutando suma" << std::endl;
    Mimatriz<int> m3(m1_row,m1_col);
    m1 + m2;
    std::cout << "Fin de suma" << std::endl;
    return 0;
}