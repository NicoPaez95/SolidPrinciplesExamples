#include "Banco.h"

void Banco::agregarCuenta(Cuenta* cuenta) {
    gestionCuentas.agregarCuenta(cuenta);
}

void Banco::agregarCliente(Cliente* cliente) {
    gestionClientes.agregarCliente(cliente);
}

void Banco::realizarTransaccion(InterfazTransaccion& transaccion, std::vector<Cuenta*>& cuentas) {
    realizarTransacciones.realizarTransaccion(transaccion, cuentas);
}