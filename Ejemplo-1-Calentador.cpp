#include <iostream>

class Calentador
{
private:
    int temperatura;
    int incremento;
    
public:
    Calentador();
    void calentar();
    void enfriar();
    void imprimeTemperatura();
    int accedeTemperatura() const; // Metodo de acceso, este metodo no modifica las variables, se le agrega el const a este tipo de metodos
    
}; //Poner ; al final de la clase

Calentador::Calentador() // "::" Operador de alcance--> a que clase pertenece
{
    temperatura = 15;
    incremento = 3;
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

int Calentador::accedeTemperatura() const // Lo que regresa "int" a que clase pertenece "::" 
{
    
}

int main()
{
    
    Calentador C1;
    
    C1.calentar();
    C1.imprimeTemperatura(); // Se escribe con el punto por que es un metodo
    
    
    C1.enfriar();
    C1.imprimeTemperatura();
}