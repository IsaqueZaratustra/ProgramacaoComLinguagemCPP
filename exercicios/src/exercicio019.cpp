# include <iostream>

int main(int argc, char const *argv[])
{
    float Notas [] {4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7, 10.0};
    float QuantidadeDeNotas {0.0}, Soma {0.0}, Media {0.0};

    for(auto Nota : Notas)
    {
    Soma += Nota;
    }
    
    QuantidadeDeNotas = sizeof(Notas) / sizeof(float);
    Media = Soma / QuantidadeDeNotas;

    std::cout << "Soma das notas: " << Soma << std::endl;
    std::cout << "Quantidade de Notas: "<< QuantidadeDeNotas << std::endl;
    std::cout << "Media de Notas: " << Media << std::endl;

    system ("Pause");
    return 0;
}
