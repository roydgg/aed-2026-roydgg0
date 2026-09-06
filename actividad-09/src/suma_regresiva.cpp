#include "suma_regresiva.hpp"

long long sumaIterativa(unsigned int n) {
    // TODO: Implementa la suma regresiva usando un ciclo.
    if (n == 0) {
        return 0;
    }
    long long total = 0;
    for (unsigned int i = n; i > 0; --i) {
        total = total + i;
    }
    return total;
}

long long sumaRecursiva(unsigned int n) {
    // TODO: Implementa la suma regresiva usando recursividad y un caso base.
    if (n == 0) {
        return 0; 
    }
    return n + sumaRecursiva(n - 1); 
}