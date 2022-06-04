#include <iostream>

int main()
{
    int Numero01, Numero02;
    int Soma = Numero01 + Numero02;
    int Subtracao = Numero01 - Numero02;
    int Multiplacao = Numero01 * Numero02;
    int Divisao = Numero01 / Numero02;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> Numero01 ;
    std::cout << "Numero01 = " << Numero01 << std::endl;
    std::cout << "Digite o segundo numero: ";
    std::cin >> Numero02 ;
    std::cout << "Numero02 = " << Numero02 << std::endl; 

    std::cout << "Numero01 + Numero02 = " << Soma << std::endl; 
    std::cout << "Numero01 - Numero02 = " << Subtracao << std::endl; 
    std::cout << "Numero01 * Numero02 = " << Multiplacao << std::endl; 
    std::cout << "Numero01 / Numero02 = " << Divisao << std::endl; 

    system("Pause");
    return 0;
}

