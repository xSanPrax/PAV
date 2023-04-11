#ifndef DTCLASE_H
#define DTCLASE_H
#include "Turno.h"
#include <string>
using namespace std;

class DtClase {
    private:
        int id;
        string nombre;
        Turno turno;
    public:
        DtClase();
        DtClase(int id, string nombre,Turno turno);
        int getId();
        void setId(int id);
        string getNombre();
        void setNombre(string nombre);
         Turno getTurno();
         void setTurno(Turno turno); // Método virtual puro
       
        virtual ~DtClase() {};


  friend ostream& operator <<(ostream&,DtClase&);

};


#endif

