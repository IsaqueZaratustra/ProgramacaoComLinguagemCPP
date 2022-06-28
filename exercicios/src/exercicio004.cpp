# include <iostream>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float Numero01, Numero02, Numero03;
    float Media = {0.0}; 

    std::cout << "Digite o primeiro numero: ";
    std::cin >> Numero01 ;
    std::cout << "Digite o segundo numero: ";
    std::cin >> Numero02 ;
    std::cout << "Digite o terceiro numero: ";
    std::cin >> Numero03 ;
    std::cout << "Numeros digitados: " << Numero01 << " " << Numero02 << " " << Numero03 << std::endl;
    Media = (Numero01 + Numero02 + Numero03)/3;
    std::cout << "Media dos numeros: " << Media << std::endl;

    system("PAUSE");
    return 0;
}
