# include <iostream>
# include <iomanip>

int main()
{
    int Numero = 45;
    float Numero2 = 55.56f;;
    double Numero3 = 45345.904555;
    char charactere = '3';
    char charactere2 = 'k';
    bool bAchou;

    bAchou = 1;
    std::cout << "Valor de bAchou: "<< bAchou << std::endl;
    bAchou = 0;
    std::cout << "Valor de bAchou: "<< bAchou << std::endl;
    bAchou = true;
    std::cout << "Valor de bAchou: "<< bAchou << std::endl;
    bAchou = false;
    std::cout << "Valor de bAchou: "<< bAchou << std::endl;
    bAchou = 'd';
    std::cout << "Valor de bAchou: "<< bAchou << std::endl;
    bAchou = "1023604A";
    std::cout << "Valor de bAchou: "<< bAchou << std::endl;


    std::cout << "Valor do Numero: " << Numero << std::endl;
    std::cout << "Tamanho da variável Numero: " << sizeof(Numero) << std::endl;
    std::cout << "Endereço carregado na memoria: " << &Numero << std::endl;

    std::cout << "Valor do Numero2: " << Numero2 << std::endl;
    std::cout << "Tamanho da variavel Numero2: " << sizeof(Numero) << std::endl;
    std::cout << "Endereco carregado na memoria: " << &Numero << std::endl;

    std::cout << "Valor do Numero3: " << Numero3 << std::endl;
    std::cout << "Tamanho da variavel Numero3: " << sizeof(Numero) << std::endl;
    std::cout << "Endereco carregado na memoria: " << &Numero << std::endl;

    std::cout << "Valor do charactere: " << charactere << std::endl;
    std::cout << "Tamanho da variavel charactere: " << sizeof(Numero) << std::endl;
    std::cout << "Endereco carregado na memoria: " << &Numero << std::endl;

    std::cout << "Valor do charactere: " << charactere2 << std::endl;
    std::cout << "Tamanho da variavel charactere2: " << sizeof(Numero) << std::endl;
    std::cout << "Endereco carregado na memoria: " << &Numero << std::endl;
}