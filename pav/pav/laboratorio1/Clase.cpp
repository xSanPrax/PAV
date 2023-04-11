#include "Clase.h"
#include "Turno.h"
Clase::Clase(int id, string nombre, Turno turno) {
    this->id = id;
    this->nombre = nombre;
    this->turno = turno;
}


int Clase::getId() {
    return this->id;
}

void Clase::setId(int id)
{
     this->id = id;
}

string Clase::getNombre() {
    return this->nombre;
}
void Clase::setNombre(string nombre)
{
    this->nombre = nombre;
}

Turno Clase::getTurno()
{
    return Turno();
}
void Clase::setTurno(Turno turno)
{
    this->turno = turno;
}

