#include <iostream>
#include "exercicio012-h.h"

int main()
{
    static int num1, num2;

    std::cout << "***insira dois numeros, para obter resultados das 4 operacoes basicas***" << std::endl;
    std::cout << "Insira o primeiro numero: " << std::endl;
    std::cin >> num1;
    std::cout << "Insira o segundo: " << std::endl;
    std::cin >> num2;
    std::cout << "Os numeros escolhidos foram " << num1 << " e " << num2 << std::endl;
    std::cout << "Os resultados das quatro operacoes numericas foram:" << std::endl;
    std::cout << "Adicao: " << adicao(num1, num2) << std::endl;
    std::cout << "Subtracao: " << subtracao(num1, num2) << std::endl;
    std::cout << "Multiplicacao: " << multiplicacao(num1, num2) << std::endl;
    std::cout << "Divisao: " << divisao(num1, num2) << std::endl;
    std::cout << "Potencia: " << potencia(num1, num2) << std::endl;
    std::cout << "Raiz quadrada do primeiro numero: " << raizQuadrada(num1) << std::endl;
    std::cout << "Raiz quadrada do segundo numero: " << raizQuadrada2(num2) << std::endl;

    system("Pause");
    return 0;
}