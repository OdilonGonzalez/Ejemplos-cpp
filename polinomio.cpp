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
        Polinomio(int C1=0, int C2=0, int C3=0); 
        int operator()(int x);
        float operator ~();
        friend void operator <<(std::ostream &,Polinomio);
        friend void operator >>(std::istream &,Polinomio&);
};

Polinomio::Polinomio(int C1, int C2, int C3)
{
    this->Coef1 = C1;
    this->Coef2 = C2;
    this->Coef3 = C3;
}


int Polinomio::operator()(int x)
{
    return x * x * this->Coef1 + x * Coef2 + Coef3;
    
}

void operator << (std::ostream &salida,Polinomio poli)
{
    salida<<poli.Coef1<<"x^2+"<<poli.Coef2<<"x+"<<poli.Coef3;
}

void operator >> (std::istream &entrada,Polinomio &poli)
{
    entrada>>poli.Coef1>>poli.Coef2>>poli.Coef3;
}

float Polinomio::operator ~()
{
    return ((-Coef1 + std::sqrt(Coef2*Coef2 - 4*Coef1*Coef3))/2*Coef1);
}

int main()
{
    Polinomio P1;
    std::cin>>P1;
    int r = 2;
    std::cout <<"El polinomio es: "<< P1;
    std::cout << std::endl;
    std::cout << "El resultado es: "<< P1(r) << std::endl;
    std::cout << "El raiz es: "<< ~P1 << std::endl;
}