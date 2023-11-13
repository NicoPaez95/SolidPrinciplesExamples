// Cliente.h
#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
public:
    Cliente(const std::string& nombre, const std::string& informacionContacto);
    const std::string& obtenerNombre() const;
    const std::string& obtenerInformacionContacto() const;

private:
    std::string nombre;
    std::string informacionContacto;
};

#endif // CLIENTE_H