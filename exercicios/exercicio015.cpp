# include <iostream>
// Desenvolva um programa que receba do usuario o numero de elementos desejado (maximo 20) armazena estes dados em um array. Depois  mostre na tela qual foi o maior e menor elemento desse array usando loops.
int main(int argc, char const *argv[])
{
    float NumeroDeElementos, Maximo, Minimo, Max {0.0}, Min{0.0}, Array [20];

    std::cout << "Digite o numero de elementos: " << std::endl;
    std::cin >> NumeroDeElementos;

    for (size_t i = 0; i < NumeroDeElementos; ++i)
{
        std::cout <<"Digite um numero: " << std::endl;
        std::cin >> Array[i];

if (Array[i] > Max)
    Max = Array[i];
else if (Array[i] < Min)
    Min = Array[i];

    //    system("Clear || CLS");
}
Maximo = Max;
Minimo = Min;
std::cout << "Maior numero digitado: " << Maximo << std::endl;
std::cout << "Menor numero digitado: " << Minimo << std::endl;

    system("Pause");
    return 0;
}
