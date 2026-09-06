#include <iostream>
#include "suma_regresiva.hpp"

int main() {
    unsigned int n = 0;
    std::cout << "Ingresa un entero no negativo: ";
    if (!(std::cin >> n)) {
        return 1;
    }
    long long resultadoIterativo = sumaIterativa(n);
    long long resultadoRecursivo = sumaRecursiva(n);

    std::cout << "Resultado iterativo: " << resultadoIterativo << std::endl;
    std::cout << "Resultado recursivo: " << resultadoRecursivo << std::endl;
    return 0;
}
