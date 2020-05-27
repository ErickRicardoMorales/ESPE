/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/
#include<iostream>
#include <sstream>
#include"Ingreso.h"
#include"Fraccion.cpp"
#include"Ecuacion.cpp"
#include"Operacion.cpp"


using namespace std;

int main() {

	Ecuacion ecuacion;
	Operacion operacion;
	Fraccion fraccion1,fraccion2,resultado;

	Ingreso ingreso;

	string dim;
	int a,b,c,d;


	cout << ">ingrese los datos de (a/b)*(c/d)" << endl;

	dim = ingreso.leer("ingrese el coeficiente a", 1);
	istringstream(dim) >> a;

	fraccion1.setNumerador (a);

	dim = ingreso.leer("ingrese el coeficiente b", 1);
	istringstream(dim) >> b;


    if(b != 0){
        fraccion1.setDenominador(b);
	}
	else{
        cout << "Valor Incorrecto" << endl;
	}



	ecuacion.setTermino1(fraccion1);

	dim = ingreso.leer("ingrese el coeficiente c", 1);
	istringstream(dim) >> c;


	dim = ingreso.leer("ingrese el coeficiente d", 1);
	istringstream(dim) >> d;

    fraccion2.setNumerador(c);

    if(d != 0){
        fraccion2.setDenominador(d);
	}
	else{
        cout << "Valor Incorrecto" << endl;
	}


    ecuacion.setTermino2(fraccion2);

    operacion.calcular(ecuacion);



	return 0;
}
