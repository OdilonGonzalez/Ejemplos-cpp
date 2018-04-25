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
    if( temperatura + incremento <= 30)
    {
        temperatura += incremento;
    }
}

void Calentador::enfriar()
{
    if(temperatura - incremento >= -10)
    {
        temperatura -= incremento;
    }
}

void Calentador::imprimeTemperatura()
{
    std::cout << "La temperatura es " << temperatura << std::endl;
}

int Calentador::accedeTemperatura() const // Lo que regresa "int" a que clase pertenece "::" 
{
    return temperatura;
}

int main()
{
    
    Calentador C1;
    Calentador C2;
    
    for (int i = 0; i < 10; i++)
    {
        C1.calentar();
        C1.imprimeTemperatura(); // Se escribe con el punto por que es un metodo
    }
    
    
    for (int j = 0; j < 10; i++)
    {
        C2.enfriar();
        C2.imprimeTemperatura();
    }
}