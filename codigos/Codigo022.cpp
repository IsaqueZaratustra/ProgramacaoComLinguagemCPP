# include <iostream>

int main()
{
    int Numero {1024};
    char Letra {'A'};
    int &Ref = Numero;

    std::cout << "\nValor de Numero: " << Numero << std::endl;
    std::cout << "\nValor de Numero usando Ref: " << Ref << std::endl;
    std::cout << "\nValor de endereco de Numero: " << &Numero << std::endl;
    std::cout << "\nValor de endereco de Ref: " << &Ref << std::endl;
    
    int* ptr = &Numero;
    std::cout << "\nValor de endereco de ptr na RAM: " << &ptr << std::endl;
    std::cout << "\nValor de Numero usando ptr: " << *ptr << std::endl;
    std::cout << "\nValor de endereco contido na ptr: " << ptr << std::endl;


    system("Pause");
    return 0;
}
