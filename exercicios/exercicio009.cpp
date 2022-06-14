# include <iostream>

int main()
{
    int soma = 0;

    for (int num = 0; num <=100; num++)
    {
        soma = soma + num;
        std::cout << soma << std::endl;
    }
    system("Pause");
    return 0;
}
