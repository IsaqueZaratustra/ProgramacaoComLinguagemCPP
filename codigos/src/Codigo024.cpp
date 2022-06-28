#include <iostream>

int main(int argc, char const *argv[])
{
    float Nota1, Nota2, Nota3, Nota4, Nota5;
    float Media;
    std::string NomeDoAluno;

    std::cout << "Nome do aluno: " << std::endl;
    std::cin >> NomeDoAluno;
    std::cout << "Primeira nota do " << NomeDoAluno << std::endl;
    std::cin >> Nota1;
    std::cout << "Segunda nota do " << NomeDoAluno << std::endl;
    std::cin >> Nota2;
    std::cout << "Terceira nota do " << NomeDoAluno << std::endl;
    std::cin >> Nota3;
    std::cout << "Quarta nota do " << NomeDoAluno << std::endl;
    std::cin >> Nota4;
    std::cout << "Quinta nota do " << NomeDoAluno << std::endl;
    std::cin >> Nota5;
    Media = (Nota1 + Nota2 + Nota3 + Nota4 + Nota5)/5;
    std::cout << "Media do aluno " << NomeDoAluno << " "<<Media << std::endl;
    system("Pause");
    return 0;
}
