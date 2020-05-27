/***********************************************************************
 * Module:  Ecuacion.cpp
 * Author:  Ricardo
 * Modified: miércoles, 27 de mayo de 2020 5:41:03
 * Purpose: Implementation of the class Ecuacion
 ***********************************************************************/

#include "Fraccion.h"
#include "Operacion.h"
#include "Ecuacion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Ecuacion::getTermino1()
// Purpose:    Implementation of Ecuacion::getTermino1()
// Return:     Fraccion
////////////////////////////////////////////////////////////////////////

Fraccion Ecuacion::getTermino1(void)
{
   return termino1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Ecuacion::setTermino1(Fraccion newTermino1)
// Purpose:    Implementation of Ecuacion::setTermino1()
// Parameters:
// - newTermino1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Ecuacion::setTermino1(Fraccion newTermino1)
{
   termino1 = newTermino1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Ecuacion::getTermino2()
// Purpose:    Implementation of Ecuacion::getTermino2()
// Return:     Fraccion
////////////////////////////////////////////////////////////////////////

Fraccion Ecuacion::getTermino2(void)
{
   return termino2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Ecuacion::setTermino2(Fraccion newTermino2)
// Purpose:    Implementation of Ecuacion::setTermino2()
// Parameters:
// - newTermino2
// Return:     void
////////////////////////////////////////////////////////////////////////

void Ecuacion::setTermino2(Fraccion newTermino2)
{
   termino2 = newTermino2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Ecuacion::Ecuacion()
// Purpose:    Implementation of Ecuacion::Ecuacion()
// Return:     
////////////////////////////////////////////////////////////////////////

Ecuacion::Ecuacion()
{
   fraccion = NULL;
   operacion = NULL;
}
