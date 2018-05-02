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
    void operator++();
    void operator--();
    void imprimeCentigrados();
    void imprimeFarenheit() const;
    int accedeTemperatura() const; // Metodo de acceso, este metodo no modifica las variables, se le agrega el const a este tipo de metodos
    bool operator ==(Calentador otro);
    
}; //Poner ; al final de la clase

Calentador::Calentador(int min, int max, int temperatura = 0) // "::" Operador de alcance--> a que clase pertenece
{
    if(min < max)
    {
       std:: "Error en el rango min-max\n";
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

void Calentador::operator++()
{
    if( temperatura + incremento <= this->max)
    {
        temperatura += incremento;
    }
}

void Calentador::operator--()
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

bool Calentador::operator ==(Calentador otro)
{
 if(this->temperatura == otro.temperatura)
 {
     return true;
     
 }
 else
 {
     return false;
 }
}

int main()
{
    Calentador C1{-10,10}; //Parametro por omision
    Calentador C2{0, 30, 10};
    
        if(C1 == C2)
        {
            std::cout << "Iguales\n";
        }
        else
        {
            std::cout << "Diferentes\n";
        }
        //C1.operator++();
        ++C1;// Es equivalente a C1.operator++(); 
        C1.imprimeCentigrados(); // Se escribe con el punto por que es un metodo
        C1.imprimeFarenheit();
    
        C2.operator--();
        C2.imprimeCentigrados();
        C2.imprimeFarenheit();


}