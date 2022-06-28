#include <iostream>

int main(int argc, char const *argv[])
{
    float Media, Notas[5], Soma {0.0};
    std::string Name;

    std::cout << "Digite o nome do aluno: " << std::endl;
    std::cin >> Name;

    for (size_t i = 0; i <=4; i++)
    {
    std::cout <<"Digite a nota " << i+1 << std::endl;
    std::cin >> Notas[i];
    Soma = Soma + Notas[i];
    system("CLS");
    }

    Media = Soma/5;
    std::cout <<"A media do aluno "<< Name << " resulta em: " << Media << std::endl;

    system("Pause");
    return 0;
}