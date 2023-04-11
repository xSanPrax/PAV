#include "DtSpinning.h"

DtSpinning::DtSpinning(int id, string nombre, Turno turno, int cantBicicletas): DtClase(id, nombre,turno)
{
     this ->cantBicicletas = cantBicicletas;
}

int DtSpinning::getcantBicicletas()
{
    return   this ->cantBicicletas = cantBicicletas;
}

void DtSpinning::setcantBicicletas(int cantBicicletas)
{
     this ->cantBicicletas = cantBicicletas;
}

ostream &operator<<(ostream &, DtSpinning& dtSpinning)
{

     std::cout << "ID:" << dtSpinning.getId() << " | Nombre: " << dtSpinning.getNombre() << " | Turno: "
     << dtSpinning.getTurno() << " | Cantidad de Bicicletas: " << dtSpinning.cantBicicletas <<  std::endl;
     

     // TODO: Insertar una instrucción "return" aquí
}
