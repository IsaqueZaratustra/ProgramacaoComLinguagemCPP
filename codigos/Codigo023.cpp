# include <iostream>

void TrocaNumero (int& Num1, int& Num2);

int main()
{
    int Numero1, Numero2;

    std::cout <<"Digite o primeiro numero: "<< std::endl;
    std::cin>>Numero1;
    std::cout <<"Digite o segundo numero: "<< std::endl;
    std::cin>>Numero2;
    TrocaNumero(Numero1, Numero2);
    std::cout << "Numero 1 depois da troca: " << Numero1<< std::endl;
    std::cout << "Numero 2 depois da troca: " << Numero2<< std::endl;

    system("Pause");
    return 0;
}

void TrocaNumero (int& Num1, int& Num2){
    int Temp(Num1);

    Num1 = Num2;

    Num2 = Temp;
    
    //std::cout << "Numero 1 depois da troca: " << Num1<< std::endl;
    //std::cout << "Numero 2 depois da troca: " << Num2<< std::endl;
}
