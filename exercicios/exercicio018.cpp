# include <iostream>

int main(int argc, char const *argv[])
{
    double Kilometers []{70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5, 99.5, 68.7};
    double Soma = {0.0};
    double Media = {0.0};

    for (auto Kilometer : Kilometers)
    {
        Soma += Kilometer;
    }
    
    Media = Soma / 9;

    std::cout << Media << std::endl;

    system("Pause");
    return 0;
}
