#ifndef DTFECHA
#define DTFECHA
#include <iostream>

using namespace std;

class DtFecha{
    private:
        int dia, mes, anio;
    public:
        DtFecha();
        DtFecha(int dia, int mes, int anio);
        int getDia();
        void setDia(int dia);
        int getMes();
        void setMes(int mes);
        int getAnio();
        void setAnio(int anio);
        ~DtFecha();

        friend ostream& operator <<(ostream&,DtFecha&);
};
#endif