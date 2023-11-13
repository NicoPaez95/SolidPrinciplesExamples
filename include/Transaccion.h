// Transaccion.h
#ifndef TRANSACCION_H
#define TRANSACCION_H

#include <string>

class Cuenta; // Declaración adelantada para evitar dependencias circulares

class InterfazTransaccion {
public:
    virtual ~InterfazTransaccion() {}
    virtual void ejecutar() = 0;
};

class Transaccion : public InterfazTransaccion {
public:
    Transaccion(Cuenta& cuenta, const std::string& descripcion);
    void ejecutar() override;

private:
    Cuenta& cuenta;
    std::string descripcion;
};

#endif // TRANSACCION_H