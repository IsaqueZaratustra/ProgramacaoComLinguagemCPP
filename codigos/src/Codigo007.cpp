# include <iostream>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int Numero01, Numero02;
    bool Comparacao;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> Numero01;
    std::cout << "Digite o segundo numero: ";
    std::cin >> Numero02;

    Comparacao = Numero01 == Numero02;
    std::cout << "Numero01 igual ao Numero02: ";
    std::cout << Comparacao << std::endl;
    Comparacao = Numero01 != Numero02;
    std::cout << "Numero01 diferente do Numero02: ";
    std::cout << Comparacao << std::endl;
    Comparacao = Numero01 > Numero02;
    std::cout << "Numero01 maior ao Numero02: ";
    std::cout << Comparacao << std::endl;
    Comparacao = Numero01 < Numero02;
    std::cout << "Numero01 menor ao Numero02: ";
    std::cout << Comparacao << std::endl;
    Comparacao = Numero01 >= Numero02;
    std::cout << "Numero01 maior ou igual ao Numero02: ";
    std::cout << Comparacao << std::endl;
    Comparacao = Numero01 <= Numero02;
    std::cout << "Numero01 menor ou igual ao Numero02: ";
    std::cout << Comparacao << std::endl;

    system("Pause");
    return 0;
}
