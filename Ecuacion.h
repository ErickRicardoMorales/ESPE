/***********************************************************************
 * Module:  Ecuacion.h
 * Author:  Ricardo
 * Modified: miércoles, 27 de mayo de 2020 5:41:03
 * Purpose: Declaration of the class Ecuacion
 ***********************************************************************/

#if !defined(__Deber2_Ecuacion_h)
#define __Deber2_Ecuacion_h

class Fraccion;
class Operacion;



class Ecuacion
{
public:
   Fraccion getTermino1(void);
   void setTermino1(Fraccion newTermino1);
   Fraccion getTermino2(void);
   void setTermino2(Fraccion newTermino2);
   Ecuacion();

   Fraccion** fraccion;
   Operacion** operacion;

protected:
private:
   Fraccion termino1;
   Fraccion termino2;


};

#endif
