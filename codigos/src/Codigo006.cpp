#include <iostream>

int main()
{
    int Numero01, Numero02;
    int Soma;
    int Subtracao;
    int Multiplacao;
    int Divisao;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> Numero01 ;
    std::cout << "Numero01 = " << Numero01 << std::endl;
    std::cout << "Digite o segundo numero: ";
    std::cin >> Numero02 ;
    std::cout << "Numero02 = " << Numero02 << std::endl; 
    Soma = Numero01 + Numero02;
    std::cout << "Numero01 + Numero02 = " << Soma << std::endl; 
    Subtracao = Numero01 - Numero02;
    std::cout << "Numero01 - Numero02 = " << Subtracao << std::endl; 
    Multiplacao = Numero01 * Numero02;
    std::cout << "Numero01 * Numero02 = " << Multiplacao << std::endl;
    Divisao = Numero01 / Numero02;
    std::cout << "Numero01 / Numero02 = " << Divisao << std::endl; 

    system("Pause");
    return 0;
}

