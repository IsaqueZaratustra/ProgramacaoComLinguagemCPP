# include <iostream>

int main()
{
    int Num1 {10}, Num2 {20}, Resultado;
    std::cout << "Valor atual de Num1: " << Num1 << " e Num2: " << Num2 << std::endl;
    Num1 = Num2++;
    std::cout << "Valor atual de Num1: " << Num1 << " e Num2: " << Num2 << std::endl;
    Num2 = ++Num1;
    std::cout << "Valor atual de Num1: " << Num1 << " e Num2: " << Num2 << std::endl;

    system("Pause");
    return 0;
}
