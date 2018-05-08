/*
*   Un polinomio de grado 2 tien la forma
*   p(X)= 3X"2 + BX +C

Escribir un programa llamado polimonio.cpp para representar y evaluar polinomios de grado 2
*/

#include <iostream>
#include <cmath>

class Polinomio
{
    private:
        int Coef1;
        int Coef2;
        int Coef3;
    public:
        Polinomio(int C1, int C2, int C3); 
        int operator()(float x);
        int DimeCoef1();
        int DimeCoef2();
        int DimeCoef3();
};

Polinomio::Polinomio(int C1, int C2, int C3)
{
    this->Coef1 = C1;
    this->Coef2 = C2;
    this->Coef3 = C3;
}

int Polinomio::DimeCoef1()
{
    return Coef1;
}

int Polinomio::DimeCoef2()
{
    return Coef2;
}

int Polinomio::DimeCoef3()
{
    return Coef3;
}

int Polinomio::operator()(float x)
{
    int res;
    
    this->Coef1 = this->DimeCoef1 * pow(x,2);
    this->Coef2 = this->DimeCoef2 * x;
    
    res = p->Coef1 + p->Coef2 + p->Coef3;
}

int main()
{
    Polinomio P1{1,2,3};
    int r;
     P1.operator ()(P1,2);
    std::cout << "El resultado es: "<< r << std::endl;
    
}