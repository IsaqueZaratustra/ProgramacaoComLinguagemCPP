# include <iostream>

int main(  )
{
    int Numero {4096};
    int *ptr;
    ptr = &Numero;

    std::cout << "Valor da variavel Numero: " << Numero << std::endl;
    std::cout << "Valor da variavel ptr: " << ptr << std::endl;
    std::cout << "Valor do endereco de Numero: " << &Numero << std::endl;
    std::cout << "Valor do endereço que a ptr esta carregando na memoria RAM: "<< &ptr << std::endl;
    std::cout << "Valor contido na variavel apontada por ptr: " << *ptr << std::endl;
    *ptr = 20963;
    std::cout << "Valor contido na variavel apontada por ptr: " << *ptr << std::endl;

    system("Pause");
    return 0;
}
