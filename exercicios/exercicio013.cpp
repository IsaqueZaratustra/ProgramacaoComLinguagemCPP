# include <iostream>

int main()
{
    int Numero = 234;
    int *Ponteiro;
    int *OutroPtr;
    *Ponteiro = 1456;
    Numero = *Ponteiro;
    std::cout << *Ponteiro << std::endl;
    std::cout << &Numero << std::endl;
    std::cout << &Ponteiro << std::endl;
    Numero = 1656;
    *OutroPtr = Numero;
    std::cout << *OutroPtr << std::endl;

    system("Pause");
    return 0;
}
