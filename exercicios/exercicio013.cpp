# include <iostream>

int main()
{
    int Numero = {234};
    int* Ponteiro = &Numero;
    int* OutroPtr = Ponteiro;
    *Ponteiro = 1456;
    Numero = *Ponteiro;
    std::cout <<"Valor de Numero: " << *Ponteiro << std::endl;
    std::cout <<"Endereco da variavel Numero:" <<&Numero << std::endl;
    std::cout <<"Endereco da variavel ponteiro: " << &Ponteiro << std::endl;
    std::cout <<"Valor contido DENTRO de Ponteiro: " << Ponteiro << std::endl;
    //*Ponteiro = *Ponteiro + 200;
    *Ponteiro += 200;
    std::cout <<"Valor de Numero: " <<*OutroPtr << std::endl;

    system("Pause");
    return 0;
}
