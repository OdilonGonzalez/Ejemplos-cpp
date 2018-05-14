#include <iostream>

template <typename Tipo>
class Pila
{
    private:
        int tope;
        Tipo *arreglo;
        int max;
    public:
        Pila(int tam); //Constructor
        ~Pila(); //Destructor
        void push(Tipo dato);
        Tipo pop();
};

template <typename Tipo>
Pila<Tipo>::Pila(int tam)
{
    tope = 0;
    max = tam;
    arreglo = new Tipo[max];
}

template <typename Tipo>
Pila<Tipo>::Pila()
{
    delete [] arreglo;
}

template <typename Tipo>
void Pila<Tipo>::push(Tipo dato);
{
    
}

template <typename Tipo>
void Pila<Tipo>::pop();
{
    //Terminarlo de Tarea...
}

int main()
{
        Pila<int> miPila{5};
        
        miPila.push(5);
        miPila.pop(7);
        
        int x = miPila.pop();
        std::cout << x;
         x = miPila.pop();
        std::cout << x;
         x = miPila.pop();
        std::cout << x;
        
}