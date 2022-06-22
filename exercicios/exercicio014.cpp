# include <iostream>

int main(int argc, char const *argv[])
{
    float Numero[10];
    float Resulta, Soma{0.0};

for (size_t i = 0; i < 10; i++)
{
    std::cout << "Digite um numero para acrescentar a soma: "<< std::endl;
    std::cin >> Numero[i];
    Soma = Soma + Numero[i];
    system("CLS");
}
    Resulta = Soma;
    std::cout << "A soma total dos numeros resulta em: " << Resulta << std::endl;

    system("Pause");
    return 0;
}
