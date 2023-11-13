
#include "Transaccion.h"
#include "Cuenta.h"

Transaccion::Transaccion(Cuenta& cuenta, const std::string& descripcion)
    : cuenta(cuenta), descripcion(descripcion) {}

void Transaccion::ejecutar() {
    // Implementación de la ejecución de la transacción
    // Puedes agregar lógica adicional aquí según tus necesidades
}