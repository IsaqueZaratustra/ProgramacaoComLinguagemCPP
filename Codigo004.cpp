# include <iostream>

//# define NUM_VIDAS 10

int main()
{
    const int NUM_VIDAS = 10;
    int TotalDeVidas;
    TotalDeVidas = NUM_VIDAS - 1;
    std::cout << "Total de Vidas" << TotalDeVidas << std::endl;
    std::cout << "Valor constante NUM_VIDAS" << NUM_VIDAS << std::endl;
    std::cout << " Endereço de memória NUM_VIDA" << & NUM_VIDAS << std::endl;
    system("Pause");
    return 0;

}
