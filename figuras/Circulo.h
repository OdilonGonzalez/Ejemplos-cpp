#ifndef CIRCULO_DEFINIDO
#define CIRCULO_DEFINIDO

#include "figura.h"

class Circulo : public Figura //Herencia publica
{
    protected:
        float radio;
    public:
        Circulo(float r);
        void calcularArea();
};

#endif