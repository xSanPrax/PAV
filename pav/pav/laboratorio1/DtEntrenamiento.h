#ifndef DTENTRENAMIENTO
#define DTENTRENAMIENTO
#include "Turno.h"
#include <string>
#include "DtClase.h"
#include <iostream>
using namespace std;

class DtEntretenimiento : public DtClase {
    private:
        bool Rambla;
    public:
        DtEntretenimiento();
        DtEntretenimiento(int id, string nombre,Turno turno, bool Rambla);
        bool esRambla();
         bool getesRambla();
         void setesRambla(bool Rambla);
        ~DtEntretenimiento() {};
        friend ostream& operator <<(ostream&,DtEntretenimiento&);
};

#endif