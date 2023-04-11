#include <chrono>
#include <thread>
#include "Clase.h"
#include "DtEntrenamiento.h"
#include "DtFecha.h"
#include "Inscripciones.h"
#include "Socio.h"
#include "Spinning.h"
#include "Turno.h"

#include <iostream>
using namespace std;



#define MAX_SOCIOS 100
#define MAX_CLASES 100
Socio* ColSocios = new Socio[MAX_SOCIOS];
int klaze[MAX_CLASES];// se mamo
int contador = 0;
int contaoraux = 0;
void leerString(string &aux){
        cin >>ws;
        getline(cin,aux);
}



void menu() {
    cout << "\t\t\t______________________" << endl;
    cout << "\n\t\t\t_CLASES ANASHEyS_" << endl;
    cout << "\t\t\t______________________\n\n" << endl;
    cout << "1). Agregar Socio" << endl;
    cout << "2). Agregar Clase" << endl;
    cout << "3). Agregar Inscripcion" << endl;
    cout << "4). Borrar Inscripcion" << endl;
    cout << "5). Mostrar socio" << endl;
    cout << "16). Salir" << endl;
    cout << "___________________________\n" << endl;
    cout << "OPCION: ";
}


struct Socios {
    Socio* s[MAX_SOCIOS];
    int tope=0;
} colSocios;


DtSocio** listarSocios(int& cantSocios);
//OPERACION B
void menuListarSocios(){
  system("clear");
  cout << "" << endl;
  cout << "_Socios" << endl;
  int cantSocios;
  DtSocio** Socios = listarSocios(cantSocios);
  for(int i=0; i< cantSocios;i++)
    cout << *Socios[i] << endl;
  cout << endl;
  system("sleep 5");
}


DtSocio** listarSocios(int& cantSocios){
  cantSocios=colSocios.tope;
  DtSocio** listado = new DtSocio *[cantSocios];
  for(int i=0; i<colSocios.tope; i++){

    int ci = stoi(colSocios.s[i]->getCi()); // Convertir string a entero
     DtSocio* dts = new DtSocio(ci, colSocios.s[i]->getNombre());
    listado[i]=dts;
  }
  return listado;
}




 

void agregarSocio(string ci, string nombre);
void menuAgregarSocio() {
      string Ci;
     string Nombre;

                  // system("clear");
             std::cout <<* "-----------------------" <<  std::endl;
            cout << "- Agregar Socio -" << endl;
            cout << "-----------------------\n" << endl;  
            cout<< "Ingrese cedula: ";
            leerString(Ci);
            cout<< "Ingrese nombre del socio: ";
            leerString(Nombre);
       try{     
     agregarSocio(Ci, Nombre);
        }catch (invalid_argument& e){
    cout << e.what() << endl;
    system("sleep 5");
  }
    }
    
  void agregarSocio(string ci, string nombre) {

 int i=0;
  while(i<colSocios.tope && colSocios.s[i]->getNombre()!=nombre)
    i++;
  if(i==colSocios.tope){
    
      Socio* s = new Socio(ci,nombre);
      colSocios.s[colSocios.tope]=s;
      colSocios.tope++; 
  } else {
    throw invalid_argument("Ya existe vengador con ese nombre!!\n");
  }
            }


void menuAgregarClase() {
   


}

void menuAgregarInscripcion() {  

}

void menuBorrarInscripcion() {  

}


int main() {


     int opcion = 0;

    try {
        menu();
        cin.clear();
        cin >> opcion;

        while (opcion != 16) {
              switch (opcion) {
            case 1:
                system("clear");
                menuAgregarSocio();
               
                break;
            case 2:
                system("clear");
                menuAgregarClase();
         
                break;
            case 3:
                system("clear");
                menuAgregarInscripcion();
        
                break;
            case 4:
                system("clear");
                menuBorrarInscripcion();
            
              break;

               case 5:
                system("clear");
                menuListarSocios();
            
              break;
                
            default:
                system("clear");
                cout << "--------------------------------" << endl;
                cout << "- Seleccione una opcion valida -" << endl;
                cout << "--------------------------------\n" << endl;  
                break;
        }
            menu();
            cin.clear();
            cin >> opcion;
              }
       cout << "\033[0;31mS̷͉͐ė̷͔ǵ̷̭m̶̠̚e̶͍̍n̷̙͋t̵͓͊á̸̫t̵̨̓i̸̊͜o̵͔̽ṉ̴͐ ̸̮̑F̸͖̈́a̴̧̽u̷͉̓l̷̼̋t̸̰͗ ̸̦̃(̶̝͝C̴̳͊o̸̝̔r̵̘̍e̵̘͝ ̷̨͊D̶͖͘ų̸͆m̸̺̌p̵̩̃ȅ̴͇d̸̘̃)̴̡̃ \033[0;31m\n" << endl; //Migueeeel
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
};
