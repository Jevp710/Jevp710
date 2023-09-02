#ifndef __MENU_OPERACIONES_H__
#define __MENU_OPERACIONES_H__

#include <iostream>
#include "Suma.h"
#include "resta.h"
#include "multi.h"
#include "div.h"
using namespace std;

enum op
{
    SUMA=1,
    RESTA,
    MULTIPLICACION,
    DIVISION
};
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
        DIVISION<<". Division\n Elige tu respuesta: "<<endl;

        cin>>opc;


    } while (opc<=SUMA || opc>=DIVISION);

    switch (opc)
    {
    case SUMA:
        cout<<"Ingresa dato 1: "<<endl<<"Ingresa dato 2: "<<endl;
        cin>>n1>>n2;
        cout<<"El resultado es: "<<suma(n1,n2)<<endl;
        break;
    
    default:
        break;
    }
    
}

#endif // __MENU_OPERACIONES_H__