# include <iostream>
# include <tchar.h>

int main()
{
//Função que configura o console windows para mostrar acentos
    _tsetlocale(LC_ALL, _T("portuguese"));
int NumVidas = 5;
//Acima o computador irá alocar um espaço de memória do tipo inteiro
int Pontuacao = 1350;

std::cout << "Incio do jogo" << std::endl;
std ::cout << "Vidas do jogador: " << NumVidas << std::endl;
std::cout << "Pontuação: " << Pontuacao << std::endl;
std::cout << "Tamanho da variavel NumVidas: " << sizeof(NumVidas) << "Bytes" << std::endl;
std::cout << "Tamanho da variavel Pontuacao: " << sizeof(Pontuacao) << "Bytes" << std::endl;
std::cout << "Endereço que NumVidas ocupa na memória RAM: " <<&NumVidas << std::endl;
std::cout << "Endereço que Pontuacao ocupa na memória RAM: " <<&Pontuacao << std::endl;
std::cout << "Durante o Jogo" << std::endl;
Pontuacao = Pontuacao + 150;
NumVidas = NumVidas - 1;
std::cout << "Vidas do jogador: " << NumVidas << std::endl;
std::cout << "Pontuacao: " << Pontuacao << std::endl;
}
