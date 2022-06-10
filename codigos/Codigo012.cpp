# include <iostream>

int main()
{
    int Num1 , Num2, MaiorNumero;

    std::cout << "Valor do numero 1: ";
    std::cin >> Num1;
    std::cout << "Valor do numero 2: ";
    std::cin >> Num2;

    MaiorNumero = (Num1 > Num2)? Num1 : Num2;
    std::cout << "Maior Numero digitado foi: " << MaiorNumero << std::endl; 
    
    (Num1 > Num2)? std::cout << "\nNumero 1 eh maior que o numero 2\n" : std::cout << "Numero 2 eh maior que o numero 1\n";

    system("Pause");
    return 0;
}
