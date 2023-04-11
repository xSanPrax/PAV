#include "DtSocio.h"

DtSocio::DtSocio() {
    this->ci = 0;
    this->nombre = "";
}

DtSocio::DtSocio(int ci, string nombre) {
    this->ci = ci;
    this->nombre = nombre;
}

int DtSocio::getCi() {
    return this->ci;
}

void DtSocio::setCi(int ci) {
    this->ci = ci;
}

string DtSocio::getNombre() {
    return this->nombre;
}

void DtSocio::setNombre(string nombre) {
    this->nombre = nombre;
}

DtSocio::~DtSocio() {}

ostream& operator <<(ostream& salida, DtSocio& dtSocio) {
    salida << "CI: " << dtSocio.ci << endl;
    salida << "Nombre: " << dtSocio.nombre << endl;
    return salida;
}
