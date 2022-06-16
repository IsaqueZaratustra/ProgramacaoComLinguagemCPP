#include <iostream>

int main()
{
    int Num1 = 0;
    double Num2 = 000.000;

    std::cout << "Tamanho da variavel Num1: " << sizeof(Num1)<< " Bytes" << std::endl;
    std::cout << "Tamanho da variavel Num2: " << sizeof(Num2)<< " Bytes" << std::endl;
    std::cout << "Endereço de memoria da variavel Num1 :" << &Num1 << std::endl;
    std::cout << "Endereço de memoria da variavel Num2 :" << &Num2 << std::endl;

    system("Pause");
    return 0;
}
