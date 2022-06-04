# include <iostream>

int main()
{
    int Numero01;
    int Numero02;
    int Numero03;
    int Soma = Numero01 + Numero02 + Numero03;
    int Media = Soma / 3; 

    std::cout << "Digite o primeiro numero: ";
    std::cin >> Numero01 ;
    std::cout << "Digite o segundo numero: ";
    std::cin >> Numero02 ;
    std::cout << "Digite o terceiro numero: ";
    std::cin >> Numero03 ;
    std::cout << "Numeros digitados: " << Numero01 << " " << Numero02 << " " << Numero03 << std::endl;
    std::cout << "Soma dos numeros:" << Soma << std::endl;
    std::cout << "Media dos numeros: " << Media << std::endl;

    system("Pause");
    return 0;
}
