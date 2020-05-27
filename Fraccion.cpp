/***********************************************************************
 * Module:  Fraccion.cpp
 * Author:  Ricardo
 * Modified: miércoles, 27 de mayo de 2020 5:41:07
 * Purpose: Implementation of the class Fraccion
 ***********************************************************************/

#include "Fraccion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getNumerador()
// Purpose:    Implementation of Fraccion::getNumerador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fraccion::getNumerador(void)
{
   return numerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setNumerador(int newNumerador)
// Purpose:    Implementation of Fraccion::setNumerador()
// Parameters:
// - newNumerador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setNumerador(int newNumerador)
{
   numerador = newNumerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getDenominador()
// Purpose:    Implementation of Fraccion::getDenominador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fraccion::getDenominador(void)
{
   return denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setDenominador(int newDenominador)
// Purpose:    Implementation of Fraccion::setDenominador()
// Parameters:
// - newDenominador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setDenominador(int newDenominador)
{
   denominador = newDenominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion()
// Purpose:    Implementation of Fraccion::Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::finalize()
// Purpose:    Implementation of Fraccion::finalize()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::finalize(void)
{
   // TODO : implement
}
