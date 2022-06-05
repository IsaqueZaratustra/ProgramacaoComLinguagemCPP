# include <iostream>
# include <tchar.h>

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese"));
    double Numero;
    bool ResultadoLogico;
    std::cout << "Digite um numero: ";
    std::cin >> Numero;
    std::cout << "True é igual a 1 e false é igual a 0" << std::endl;
    ResultadoLogico = ((Numero>100) && (Numero!=0));
    std::cout << "O resultado logico da expressão ((Numeeo>100) && (Numero ! 0)) é: " << ResultadoLogico << std::endl;
    ResultadoLogico = ((Numero==100) || (Numero>200)) && (Numero > 1000);
    std::cout << "O resultado logico da expressão ((Numero==100) || (Numero>200)) && (Numero > 1000) é: " << ResultadoLogico << std::endl;

    system("Pause");
    return 0;
}
