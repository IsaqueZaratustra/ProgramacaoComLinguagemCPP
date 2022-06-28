# include <iostream>
# include <string>
# include <tchar.h>

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese"));
    bool bFezSol, bCarroPronto, bSalarioDepositado;
    bool bAcesso;
    std::string SenhaDeAcesso = "cmaismais";
    std::string SenhaDigitada;

    std::cout << "Digite a senha: ";
    std::cin >> SenhaDigitada;

    if (SenhaDigitada==SenhaDeAcesso)
    {
        std::cout<< "\nAcesso Permitido" << std::endl;
        bAcesso = true;
        //system("Pause");
    }
    else{
        std::cout<< "\nAcesso Negado!!!" << std::endl;
        system("Pause");
        exit(0);
    }
    bFezSol = bCarroPronto = bSalarioDepositado = true;
    if(bAcesso=true){
        if (bFezSol && bCarroPronto && bSalarioDepositado){
            std::cout<<"Vai dar praia" << std::endl;

        }else{
            std::cout<<"Não vai dar praia" << std::endl;
        }
    system("Pause");
    }
    return 0;
}
