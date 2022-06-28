# include <iostream>

int ParOuImpar(int num){
    if (num % 2 == 0)
    {
        std::cout << "Esse numero eh par" << std::endl;
    } else {
        std::cout << "Esse numero eh impar" << std::endl;
    }
}

int main()
{
    int num;
    std::cout << "Par ou impar? Digite um numero para saber: " << std::endl;
    std::cin >> num;
    ParOuImpar(num);

    system("Pause");
    return 0;
}
