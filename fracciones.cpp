/* Fraccion
*    atributos: numerados y denominador
*   Operadores: sumar, restar, multiplicar, dividir 
*/

#include <iostream>

class Fraccion
{
    private:
        int Denominador;
        int Numerador;
    
    public:
        Fraccion(int Denominador, int Numerador); // prototipo
        void imprimeFraccion();
        int DimeDen();
        int DimeNum();
    
};

Fraccion::Fraccion(int Denominador, int Numerador)
{
    this->Denominador = Denominador;
    this->Numerador = Numerador;
}

int Fraccion::DimeNum()
{
    return (this->Numerador);
}

int Fraccion::DimeDen()
{
    return (this->Denominador);
}

Fraccion operator +(Fraccion otra)
{
    Fraccion F;
        
        F.DimeDen() = F.DimeDen() * otra.DimeDen();
        //this->Numerador = (this->Numerador * otra.Denominador) * (this->Denominador * otra.Numerador);
        
        return(F);
}

void Fraccion::imprimeFraccion()
{
    std:: cout << "El resultado es" << this->Numerador << "/" << this->Denominador;
}

int main()
{
    Fraccion F1{1,10};
    Fraccion F2{2,3};
    Fraccion F3;
    
    F3 = F1 + F2; 
}