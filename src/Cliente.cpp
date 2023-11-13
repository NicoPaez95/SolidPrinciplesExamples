#include "Cliente.h"

Cliente::Cliente(const std::string& nombre, const std::string& informacionContacto)
    : nombre(nombre), informacionContacto(informacionContacto) {}

const std::string& Cliente::obtenerNombre() const {
    return nombre;
}

const std::string& Cliente::obtenerInformacionContacto() const {
    return informacionContacto;
}