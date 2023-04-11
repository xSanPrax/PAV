#include "DtClase.h"
#include "Turno.h"
DtClase::DtClase(int id, string nombre, Turno turno) {
    this->id = id;
    this->nombre = nombre;
    this->turno = turno;
}

int DtClase::getId() {
    return this->id;
}

void DtClase::setId(int id)
{
     this->id = id;
}

string DtClase::getNombre() {
    return this->nombre;
}
void DtClase::setNombre(string nombre)
{
    this->nombre = nombre;
}

Turno DtClase::getTurno()
{
    return Turno();
}
void DtClase::setTurno(Turno turno)
{
    this->turno = turno;
}





