#include "promedio.hpp"

#include <stdexcept>

namespace aed {

double calcularSuma(const std::vector<double>& calificaciones) {
    double total = 0;
    // TODO: recorre el vector con un for basado en rango y devuelve la suma.
        for (double x : calificaciones) {
        total = total + x;
    }
    return total;
}

double calcularPromedio(const std::vector<double>& calificaciones) {
    if (calificaciones.empty()) {
        throw std::invalid_argument("No se puede promediar un vector vacío");
    }

    // TODO: usa calcularSuma y devuelve el promedio.
        double suma = calcularSuma(calificaciones);
            double cantidad = calificaciones.size();

    return suma / cantidad;
}

}  // namespace aed

