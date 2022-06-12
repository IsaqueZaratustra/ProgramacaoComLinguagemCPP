# include <iostream>

int main()
{
    int Numero;

    Numero=0;
    while (Numero <=50){
    if (Numero % 2 == 0){
        std::cout << Numero << std::endl;
    }
        Numero++;
    }

    system("Pause");
    return 0;
}
