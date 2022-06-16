#include <iostream>

int main()
{
    //*ptr = ponteiro, aquele cuja armazena um endereco
    int Num1 = 0, *ptr;
    double Num2 = 000.000;

    std::cout << "Tamanho da variavel Num1: " << sizeof(Num1)<< " Bytes" << std::endl;
    std::cout << "Tamanho da variavel Num2: " << sizeof(Num2)<< " Bytes" << std::endl;
    std::cout << "Tamanho da variavel ptr: " << sizeof(ptr)<< " Bytes" << std::endl;
    std::cout << "Endereço de memoria da variavel Num1 :" << &Num1 << std::endl;
    std::cout << "Endereço de memoria da variavel Num2 :" << &Num2 << std::endl;
    std::cout << "Endereço de memoria da variavel ptr :" << &ptr << std::endl;
    std::cout << "O que esta armazenado na variavel ptr :" << ptr << std::endl;
   
    system("Pause");
    return 0;
}
