#include "figura.h" // "" para mis archivos
#include <iostream> //<> para archivos de C++

Figura::Figura()
{
    area = 0;

}
/*
void Figura::calcularArea()
{
    std::cout << "NO SE COMO CALCULAR AREA";
}
*/

void Figura::imprimirArea()
{
    std::cout << "EL AREA ES: " << area;
}
