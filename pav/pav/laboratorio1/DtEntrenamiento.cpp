#include "DtEntrenamiento.h"



DtEntretenimiento::DtEntretenimiento(int id, string nombre, Turno turno, bool Rambla) : DtClase(id, nombre, turno)
{
    this->Rambla = Rambla;
}

bool DtEntretenimiento::esRambla() {
    return this->Rambla;
}

bool DtEntretenimiento::getesRambla()
{
    return false;
}

void DtEntretenimiento::setesRambla(bool Rambla)
{
    this->Rambla = Rambla;
}

ostream &operator<<(ostream &, DtEntretenimiento &dtentrenamiento)
{
    std::cout << "ID:" << dtentrenamiento.getId() << " | Nombre: " << dtentrenamiento.getNombre() << " | Turno: "
     << dtentrenamiento.getTurno() <<  std::endl;




    // TODO: Insertar una instrucción "return" aquí
}
