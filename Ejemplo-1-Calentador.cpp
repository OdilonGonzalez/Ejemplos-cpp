#include <iostream>

class Calentador
{
private:
    int temperatura;
    int incremento;
    int min;
    int max;
    
public:
    Calentador(int min, int max, int temperatura); //Prototipo
    void calentar();
    void enfriar();
    void imprimeCentigrados();
    void imprimeFarenheit() const;
    int accedeTemperatura() const; // Metodo de acceso, este metodo no modifica las variables, se le agrega el const a este tipo de metodos
    
}; //Poner ; al final de la clase

Calentador::Calentador(int min, int max, int temperatura = 0) // "::" Operador de alcance--> a que clase pertenece
{
    if(min > max)
    {
       std:: "Error en el rango min-max" << std::endln ;
        std::exit(EXIT_FAILURE);
        
    }
        if(temperatura >= min && temperatura <= max)
        {
        this->temperatura = temperatura;
        }
        else
        {
            this->temperatura = min;
        }
    incremento = 3;
    this->min = min; //this es un apuntador
    this->max = max;
}

void Calentador::calentar()
{
    if( temperatura + incremento <= this->max)
    {
        temperatura += incremento;
    }
}

void Calentador::enfriar()
{
    if(temperatura - incremento >= this->min)
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
    //try{
    Calentador C1{-10,10}; //Parametro por omision
    Calentador C2{0,30, -10};
    
        C1.calentar();
        C1.imprimeCentigrados(); // Se escribe con el punto por que es un metodo
        C1.imprimeFarenheit();
    
        C2.enfriar();
        C2.imprimeCentigrados();
        C2.imprimeFarenheit();
   // catch(const std::runtime_error &e)

}