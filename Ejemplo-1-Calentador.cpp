#include <iostream>

class Calentador
{
private:
    int temperatura;
    
public:
    Calentador();
    void calentar();
    void enfriar();
    void imprimeTemperatura();
    
}; //Poner ; al final de la clase

Calentador::Calentador() // "::" Operador de alcance--> a que clase pertenece
{
    temperatura = 15;
}

void Calentador::calentar()
{
    temperatura += 5;
}

void Calentador::enfriar()
{
    temperatura -=5;
}

void Calentador::imprimeTemperatura()
{
    std::cout << "La temperatura es " << temperatura << std::endl;
}

int main()
{
    
    Calentador C1;
    
    C1.calentar();
    C1.imprimeTemperatura(); // Se escribe con el punto por que esun metodo
    
    
    C1.enfriar();
    C1.imprimeTemperatura();
}