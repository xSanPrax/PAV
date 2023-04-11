
#ifndef SPINNING
#define SPINNING
#include "Turno.h"
#include <string>
#include "Clase.h"
#include "DtSpinning.h"

class Spinning : public Clase {
    private:
        int cantBicicletas;
    public:
        Spinning();
        Spinning(int id, string nombre,Turno turno, int cantBicicletas);
         int getcantBicicletas();
         void setcantBicicletas(int cantBicicletas);
         DtClase* getDtClase();
        ~Spinning() {};

};
#endif