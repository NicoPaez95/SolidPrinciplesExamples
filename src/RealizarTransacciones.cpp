
#include "RealizarTransacciones.h"
#include "Cuenta.h"

void RealizarTransacciones::realizarTransaccion(InterfazTransaccion& transaccion, std::vector<Cuenta*>& cuentas) {
    // Implementación de la lógica para realizar una transacción
    // Puedes agregar lógica adicional aquí según tus necesidades
    transaccion.ejecutar();  // Ejecutar la transacción
}