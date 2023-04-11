#include "Socio.h"

Socio::Socio() {
    this->ci = "";
    this->nombre = "";
}

Socio::Socio(string ci, string nombre) {
    this->ci = ci;
    this->nombre = nombre;
}

string Socio::getCi() {
    return this->ci;
}

void Socio::setCi(string ci) {
    this->ci = ci;
}

string Socio::getNombre() {
    return this->nombre;
}

void Socio::setNombre(string nombre) {
    this->nombre = nombre;
}

DtSocio* Socio::getDtSocio() {
    DtSocio* dtSocio = new DtSocio(stoi(this->ci), this->nombre);
    return dtSocio;
}

Socio::~Socio() {}