#include <iostream>
#include "Suma.h"
#include "resta.h"
#include "multi.h"
#include "div.h"
#include "alumno.h"

using namespace std;

enum op
{
    SUMA=1,
    RESTA,
    MULTIPLICACION,
    DIVISION,
    SALIR
};
using namespace std;

void Menu_Operaciones();

int main()
{
    Menu_Operaciones();
    Alumno x;
    x.Capturar();
    x.Mostrar();
    x.Eliminar();
    x.Buscar();
    

}


void Menu_Operaciones()
{
    int opc;
    float n1=0,n2=0;

    do
    {
        cout<< "Bienvenido te mostramos el menu de operaciones a realizar: \n"<<
        SUMA<<". Suma\n"<<
        RESTA<<". Resta\n"<<
        MULTIPLICACION<<". Multiplicacion\n"<<
        DIVISION<<". Division\n"<<
        SALIR<<". Salir\n"<<
        "Elige tu respuesta: "<<endl;

        cin>>opc;


    } while (opc<SUMA || opc>SALIR);

    switch (opc)
    {
    case SUMA:
        cout<<"Ingresa dato 1: ";
        cin>>n1;
        cout<<"Ingresa dato 2: ";
        cin>>n2;
        cout<<"El resultado es: "<< suma(n1,n2) <<endl;
        break;
    case RESTA:
        cout<<"Ingresa dato 1: ";
        cin>>n1;
        cout<<"Ingresa dato 2: ";
        cin>>n2;
        cout<<"El resultado es: "<< resta(n1,n2) <<endl;
        break;
    case MULTIPLICACION:
        cout<<"Ingresa dato 1: ";
        cin>>n1;
        cout<<"Ingresa dato 2: ";
        cin>>n2;
        cout<<"El resultado es: "<< multi(n1,n2) <<endl;
        break;
    case DIVISION:
        cout<<"Ingresa dato 1: ";
        cin>>n1;
        cout<<"Ingresa dato 2: ";
        cin>>n2;
        cout<<"El resultado es: "<< div(n1,n2) <<endl;
        break;
      case SALIR:
        cout<<"SALIENDO...";
        break;
    }
    
}
