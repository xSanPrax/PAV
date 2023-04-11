#ifndef Inscripciones_H
#define Inscripciones_H
#include <iostream>//josé miguel
#include "DtFecha.h"

class Inscripciones{
private:
    DtFecha Fecha;
public:

    Inscripciones(DtFecha Fecha);
    DtFecha getFecha();
    DtFecha setFecha(DtFecha Fecha);
    ~Inscripciones();
};
#endif