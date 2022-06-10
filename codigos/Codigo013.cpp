# include <iostream>

int main()
{
    int num;

    std::cout << "Digite um numero de 1 a 3: ";
    std::cin >> num;
    switch (num)
    {
        case 1: std::cout << "Numero 1 foi escolhido\n";
        break;

        case 2: std::cout << "Numero 2 foi escolhido\n";
        break;

        case 3: std::cout << "Numero 2 foi escolhido\n";
        break;

        default: std::cout << "Nem um numero de 1 a 3 foi escolhido!" << std::endl;
    }

    system("Pause");
    return 0;
}
