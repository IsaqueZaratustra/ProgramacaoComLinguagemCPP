# include <iostream>
# include <tchar.h>

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese"));
//Você pode usar () para iniciar váriaveis literais
//{} é a inicialização uniforme, permite tanto iniciar com valores literais (int, float, caractere)  quanto valores escalares (vetores, enums etc...)
    int NumeroInteiro {12};
    float NumeroReal {34.56};
    char Caractere {'c'};

//Para declarar uma string usamos std::string
    std::string Texto{"Aprendendo c++"};
//"%x" indica que você quer que seja colocado na string 
    std::printf("Inteiro: %d - Real: %.4f - Caractere: %c - Texto: %s \n", NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
    std::cout << "Texto da string: " << Texto << std::endl;
    std::printf("O valor do caractere digitado: %c na Tabela ASCIII é: %d \n", Caractere, Caractere);
//%d Número decimal inteiro (int)
//%f Número decimal de ponto flutuante, serve tanto para float quanto para double
//%c Caractere 
//%s sequencias de caracteres, string em inglês

    system("Pause");
    return 0;
}
