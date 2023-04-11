#ifndef CLASE_H
#define CLASE_H
#include "Turno.h"
#include <string>
#include "DtClase.h"

using namespace std;

class Clase {
    private:
        int id;
        string nombre;
        Turno turno;
    public:
        Clase(int id, string nombre,Turno turno);
        int getId();
        void setId(int id);
        string getNombre();
        void setNombre(string nombre);
         Turno getTurno();
         void setTurno(Turno turno);
        virtual DtClase* getDtClase()=0;

        virtual ~Clase() {};


  friend ostream& operator <<(ostream&,Clase&);

};



#endif

