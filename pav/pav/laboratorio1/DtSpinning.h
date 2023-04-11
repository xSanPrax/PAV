#ifndef DTSPINNING
#define DTSPINNING
#include "Turno.h"
#include <string>
#include "DtClase.h"
#include <iostream>
using namespace std;

class DtSpinning : public DtClase {
    private:
        int cantBicicletas;
    public:
        DtSpinning();
        DtSpinning(int id, string nombre,Turno turno, int cantBicicletas);
         int getcantBicicletas();
         void setcantBicicletas(int cantBicicletas);
         friend ostream& operator <<(ostream&,DtSpinning&);
        ~DtSpinning() {};
};
#endif