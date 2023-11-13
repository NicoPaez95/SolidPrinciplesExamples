// Banco.h
#ifndef BANCO_H
#define BANCO_H

#include "GestionCuentas.h"
#include "GestionClientes.h"
#include "RealizarTransacciones.h"

class Banco {
private:
    GestionCuentas gestionCuentas;
    GestionClientes gestionClientes;
    RealizarTransacciones realizarTransacciones;
};

#endif // BANCO_H