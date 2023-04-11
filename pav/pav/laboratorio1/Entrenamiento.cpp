#include "Entrenamiento.h"



Entretenimiento::Entretenimiento(int id, string nombre,Turno turno, bool Rambla):Clase(id, nombre,turno){
    setId(id);
    setNombre(nombre);
    setTurno(turno);
    this->Rambla = Rambla;
}

bool Entretenimiento::esRambla() {
    return this->Rambla;
}

bool Entretenimiento::getesRambla()
{
    return false;
}

void Entretenimiento::setesRambla(bool Rambla)
{
    this->Rambla = Rambla;
}

DtClase *Entretenimiento::getDtClase()
{
    DtClase * dtentrenamiento= new DtEntretenimiento(this->getId(),this->getNombre(),this->getTurno(),this->Rambla = Rambla );
    return dtentrenamiento;

}


