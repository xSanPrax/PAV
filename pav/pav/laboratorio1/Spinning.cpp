#include "Spinning.h"


Spinning::Spinning(int id, string nombre, Turno turno, int cantBicicletas): Clase(id, nombre,turno)
{
    setId(id);
    setNombre(nombre);
    setTurno(turno);
    this->cantBicicletas= cantBicicletas;
}

int Spinning::getcantBicicletas()
{
    return this ->cantBicicletas= cantBicicletas;
}

void Spinning::setcantBicicletas(int cantBicicletas)
{
    this ->cantBicicletas= cantBicicletas;
}

DtClase *Spinning::getDtClase()
{
    DtClase* dtSpinning = new DtSpinning(this->getId(),this->getNombre(),this->getTurno(),this->cantBicicletas= cantBicicletas);
    return dtSpinning;
}



