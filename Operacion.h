/***********************************************************************
 * Module:  Operacion.h
 * Author:  Ricardo
 * Modified: miércoles, 27 de mayo de 2020 5:02:35
 * Purpose: Declaration of the class Operacion
 ***********************************************************************/

#if !defined(__Deber2_Operacion_h)
#define __Deber2_Operacion_h


#include "Fraccion.h"
#include "Ecuacion.h"

class Fraccion;

class Operacion
{
public:
   Fraccion getRespuesta(void);
   void setRespuesta(Fraccion newRespuesta);
   Operacion();
   Fraccion calcular(Ecuacion ecu);

protected:
private:
   Fraccion respuesta;


};

#endif
