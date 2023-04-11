#ifndef DTSOCIO
#define DTSOCIO
#include <iostream>//josee miguel

using namespace std;

class DtSocio
{
private:
   int ci;
   string nombre;

public:
   DtSocio();
   DtSocio(int ci,string nombre);
   int getCi();
   void setCi(int ci);
   string getNombre();
   void setNombre(string nombre);
   ~DtSocio();
   friend ostream& operator <<(ostream&,DtSocio&);
};

 
#endif