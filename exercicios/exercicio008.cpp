# include <iostream>
# include <tchar.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int escolha;

    do
    {
        std::cout << "Escolha a forma de pagamento:" << std::endl;
        std::cout << "1 - Ticket Meia entrada" << std::endl;
        std::cout << "2 - Ticket entrada completa" << std::endl;
        std::cout << "3 - Sair " << std::endl;
        std::cin >> escolha;

    switch (escolha)
    {
    case 1:
        std::cout << "\nMeia entrada"<< std::endl;
        break;
    case 2:
        std::cout << "\nEntrada completa"<< std::endl;
        break;  
    default:
        std::cout << "\nSaindo"<< std::endl;
        break;
    }    
     system("Pause");   
    } while (escolha !=3);

    return 0;
}