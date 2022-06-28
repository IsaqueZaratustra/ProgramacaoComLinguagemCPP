# include <iostream>

void TrocaNumero (int& Num1, int& Num2);

int main()
{
    int Numero1, Numero2;
    std::cout << "***Antes da Troca***" << std::endl;
    std::cout <<"Digite o primeiro numero: "<< std::endl;
    std::cin>>Numero1;
    std::cout <<"Digite o segundo numero: "<< std::endl;
    std::cin>>Numero2;
    std::cout << "***Depois da Troca***" << std::endl;
    TrocaNumero(Numero1, Numero2);
    std::cout << "Primeiro numero depois da troca: " << Numero1<< std::endl;
    std::cout << "Segundo numero depois da troca: " << Numero2<< std::endl;

    system("Pause");
    return 0;
}

void TrocaNumero (int& Num1, int& Num2){
    int Temp(Num1);

    Num1 = Num2;

    Num2 = Temp;
}