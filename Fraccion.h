/***********************************************************************
 * Module:  Fraccion.h
 * Author:  Ricardo
 * Modified: miércoles, 27 de mayo de 2020 5:41:07
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/

#if !defined(__Deber2_Fraccion_h)
#define __Deber2_Fraccion_h

class Fraccion
{
public:
   int getNumerador(void);
   void setNumerador(int newNumerador);
   int getDenominador(void);
   void setDenominador(int newDenominador);
   Fraccion();

protected:
   void finalize(void);

private:
   int numerador;
   int denominador;


};

#endif
