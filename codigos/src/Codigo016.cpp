# include <iostream>

int SomaAUmNumero (int Numero, int NumeroASerSomado){
    return Numero + NumeroASerSomado;
}
void Mensagem(){
    std::cout << "\n Mensagem nao enviada..." << std::endl;
    //return
    std::cout << "\n Mensagem nao enviada... novamente" << std::endl;
    //return
}
int main()
{
    int RetornoDafuncao;

    Mensagem();
    int Numero, NumeroASerSomado;
    std::cout << "Digite um numero: " << std::endl;
    std::cin >> Numero;
    std::cout << "Digite um numero a ser somado: " << std::endl;
    std::cin >> NumeroASerSomado;
    std::cout <<"A soma do numero " << Numero << " com o numero " << NumeroASerSomado << " resulta em: " << SomaAUmNumero(Numero, NumeroASerSomado) <<std::endl;
    RetornoDafuncao = SomaAUmNumero (200, -500);
    std::cout << "soma de 200 com -500 resulta em: " << RetornoDafuncao << std::endl;
    std::cout << SomaAUmNumero(Numero, SomaAUmNumero(150, 1400)) << std::endl;

    system("Pause");
    return 0;
}