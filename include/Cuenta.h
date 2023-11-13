// Cuenta.h
#ifndef CUENTA_H
#define CUENTA_H

class Cuenta {
public:
    virtual ~Cuenta() {}
    virtual double obtenerSaldo() const = 0;
    virtual void depositar(double monto) = 0;
    virtual void retirar(double monto) = 0;
    virtual std::string obtenerTipoCuenta() const = 0;
};

#endif // CUENTA_H
