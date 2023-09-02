#ifndef __ALUMNO_H__
#define __ALUMNO_H__
#include<iostream>
#include<fstream>
#include "string.h"
#include "windows.h"
using namespace std;

class Alumno
	{
	public:
		char user[35],pass[35],nom[35],ape[35],mail[35];
		void Capturar();
		void Mostrar();
		void Buscar ();
		void Eliminar();
		void Modificar();
	};


#endif // __ALUMNO_H__