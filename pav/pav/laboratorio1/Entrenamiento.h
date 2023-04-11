#ifndef ENTRENAMIENTO
#define ENTRENAMIENTO
#include "Turno.h"
#include <string>
#include "Clase.h"
#include "DtEntrenamiento.h"



class Entretenimiento : public Clase {
    private:
        bool Rambla;
    public:
        Entretenimiento();
        Entretenimiento(int id, string nombre,Turno turno, bool Rambla);
        bool esRambla();
         bool getesRambla();
         void setesRambla(bool Rambla);
         DtClase* getDtClase();
         
        ~Entretenimiento() {};
        
};

#endif