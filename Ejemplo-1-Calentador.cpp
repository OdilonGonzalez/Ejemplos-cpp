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
    void imprimeCentigrados();
    void imprimeFarenheit() const;
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

void Calentador::imprimeCentigrados()
{
    std::cout << "La temperatura es " << temperatura << std::endl;
}

void Calentador::imprimeFarenheit() const
{
    std::cout << "La temperatura es " << temperatura * 1.8 + 32 << "F°" << std::endl;
}

int Calentador::accedeTemperatura() const // Lo que regresa "int" a que clase pertenece "::" 
{
    return temperatura;
}

int main()
{
    
    Calentador C1;
    Calentador C2;
    
        C1.calentar();
        C1.imprimeCentigrados(); // Se escribe con el punto por que es un metodo
        C1.imprimeFarenheit();
    
        C2.enfriar();
        C2.imprimeCentigrados();
        C2.imprimeFarenheit();

}