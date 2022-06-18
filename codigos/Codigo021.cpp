# include <iostream>

int main()
{
    int Numero {4890};
    char Letra {'E'};
    void *ptrG;

    ptrG = &Letra;
    std::cout << "Valor de Letra via ptrG = " << *(char *)ptrG << std::endl;
    ptrG = &Numero;
    std::cout << "Valor de Numero via ptrG = " << *(int *)ptrG << std::endl;

    system("Pause");
    return 0;
}
