# include <iostream>

int main()
{
    int Num1, Num2;
    char Processado;

    std::cout << "Digite o primeiro numero inteiro: ";
    std::cin >> Num1 ;
    std::cout << "Digite o segundo numero inteiro: ";
    std::cin >> Num2 ;

    std::cout << "digite: \n'+' para adicao \n'-' para Subtracao \n'*' para multiplacao \n'/' para divisao\n";
    std::cin >> Processado;

    switch (Processado) 
    {
        case '+':
        std::cout << "A soma dos numeros resulta em: " << (Num1 + Num2)<< std::endl;
        break;
        case '-':
        std::cout << "A subtracao dos numeros resulta em: " << (Num1 - Num2)<< std::endl;
        break;
        case '*':
        std::cout << "A multiplicacao dos numeros resulta em: " << (Num1 * Num2)<< std::endl;
        break;
        case '/':
        std::cout << "A divisao dos numeros resulta em: " << (Num1 / Num2) << std::endl;
        break;
    }

    system("Pause");
    return 0;
}
