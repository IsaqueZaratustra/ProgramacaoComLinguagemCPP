# include <iostream>

int main()
{
    int Numero {4890};
    char Letra {'E'};
    void *ptrG;

    std::cout << "endereco de letra via ptrG = " << &Letra << std::endl;
    std::cout << "endereco de numero via ptrG = " << &Numero << std::endl;
    std::cout << "endereco de ptrG via ptrG = " << &ptrG << std::endl;

    ptrG = &Letra;
    std::cout << "Valor de Letra via ptrG = " << *(char *)ptrG << std::endl;
    ptrG = &Numero;
    std::cout << "Valor de Numero via ptrG = " << *(int *)ptrG << std::endl;

    system("Pause");
    return 0;
}
