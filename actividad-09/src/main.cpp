#include <iostream>
#include "suma_regresiva.hpp"

int main() {
    unsigned int n = 0;
    
    std::cout << "Ingresa un entero no negativo: ";
    if (!(std::cin >> n)) {
        return 1;
    }
    
    long long resultado_iterativo = sumaIterativa(n);
    long long resultado_recursivo = sumaRecursiva(n);
    
    std::cout << "Resultado iterativo: " << resultado_iterativo << std::endl;
    std::cout << "Resultado recursivo: " << resultado_recursivo << std::endl;
    
    return 0;
}

