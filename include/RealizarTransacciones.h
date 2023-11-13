
// RealizarTransacciones.h
#ifndef REALIZARTRANSACCIONES_H
#define REALIZARTRANSACCIONES_H

#include "Transaccion.h"
#include <vector>

class RealizarTransacciones {
public:
    void realizarTransaccion(InterfazTransaccion& transaccion, std::vector<Cuenta*>& cuentas);
};

#endif // REALIZARTRANSACCIONES_H