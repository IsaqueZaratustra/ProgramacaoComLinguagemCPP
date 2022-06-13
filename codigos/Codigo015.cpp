# include <iostream>

int SomaAUmNumero (int Numero, int NumeroASerSomado){
    return Numero + NumeroASerSomado;
}

int main()
{
    int Numero, NumeroASerSomado;
    std::cout << "Digite um numero: " << std::endl;
    std::cin >> Numero;
    std::cout << "Digite um numero a ser somado: " << std::endl;
    std::cin >> NumeroASerSomado;
    std::cout <<"A soma do numero " << Numero << " com o numero " << NumeroASerSomado << " resulta em: " << SomaAUmNumero(Numero, NumeroASerSomado) <<std::endl;

    system("Pause");
    return 0;
}
