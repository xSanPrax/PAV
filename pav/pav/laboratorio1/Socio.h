#ifndef SOCIO
#define SOCIO
#include <iostream>//josé miguel
#include "DtSocio.h"
using namespace std;

class Socio{
    private:
        string ci,nombre;
        
    public:
        Socio();
        Socio(string ci, string nombre);
        string getCi();
        void setCi(string ci);
        string getNombre();
        void setNombre(string nombre);
        DtSocio*getDtSocio();
        ~Socio();

       
};
#endif