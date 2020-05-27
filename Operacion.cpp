/***********************************************************************
 * Module:  Operacion.cpp
 * Author:  Ricardo
 * Modified: miércoles, 27 de mayo de 2020 5:02:35
 * Purpose: Implementation of the class Operacion
 ***********************************************************************/

#include "Operacion.h"
#include "Ecuacion.h"
#include "Fraccion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::getRespuesta()
// Purpose:    Implementation of Operacion::getRespuesta()
// Return:     Fraccion
////////////////////////////////////////////////////////////////////////

Fraccion Operacion::getRespuesta(void)
{
   return respuesta;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::setRespuesta(Fraccion newRespuesta)
// Purpose:    Implementation of Operacion::setRespuesta()
// Parameters:
// - newRespuesta
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::setRespuesta(Fraccion newRespuesta)
{
   respuesta = newRespuesta;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Operacion()
// Purpose:    Implementation of Operacion::Operacion()
// Return:
////////////////////////////////////////////////////////////////////////

Operacion::Operacion()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::calcular(Ecuacion ecu)
// Purpose:    Implementation of Operacion::calcular()
// Parameters:
// - ecu
// Return:     Fraccion
////////////////////////////////////////////////////////////////////////

Fraccion Operacion::calcular(Ecuacion ecu)
{
   Fraccion resultado;
   Ecuacion ecuacion;



   int a,b = 0,c,d,num,den;

   ecuacion.setTermino1(ecu.getTermino1());
   ecuacion.setTermino2(ecu.getTermino2());


   a = ecuacion.getTermino1().getNumerador();
   b = ecuacion.getTermino1().getDenominador();
   c = ecuacion.getTermino2().getNumerador();
   d = ecuacion.getTermino2().getDenominador();


   num=(a*d)+(c*b);
   den = b*d;

   resultado.setNumerador(num);
   resultado.setDenominador(den);

   cout << ">el resultado es " << num << "/" << den << endl;

   return resultado;

}
