# include <iostream>

int main()
{
    float Numero01;
    float Numero02;
    float Numero03;
    float Soma = Numero01 + Numero02 + Numero03;
    float Media = Soma / 3; 

    std::cout << "Digite o primeiro numero: ";
    std::cin >> Numero01 ;
    std::cout << "Digite o segundo numero: ";
    std::cin >> Numero02 ;
    std::cout << "Digite o terceiro numero: ";
    std::cin >> Numero03 ;
    std::cout << "Numeros digitados: " << Numero01 << Numero02 << Numero03 << std::endl;
    std::cout << "Media dos numeros: " << Media << std::endl;

    system("Pause");
    return 0;
}
