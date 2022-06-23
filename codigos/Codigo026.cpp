# include <iostream>

void MostrarVetor (int Array[] , int TamanhoDoVetor);

int main(int argc, char const *argv[])
{
    int TamanhoDoVetor;
    int Vetor [] {1,2,3,4,5,6,7,8,9,10};

    MostrarVetor(Vetor, 10);

    system("Pause");
    return 0;
}

void MostrarVetor (int Array[] , int TamanhoDoVetor){
    for (size_t i = 0; i < TamanhoDoVetor; i++)
    {
        std::cout << Array[i] << std::endl;
    }
    
}
