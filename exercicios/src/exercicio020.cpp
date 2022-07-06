# include <iostream>

void DesenharPonto3D (Ponto3D Pontos);

struct Ponto3D
{
    int X;
    int Y;
    int Z;
    void DesenharPonto3D (Ponto3D Pontos){
        std::cout << "X: " << Pontos.X << " Y: " << Pontos.Y << " Z: " << Pontos.Z ;
    }
};


int main(int argc, char const *argv[])
{
    Ponto3D PontoC;
    PontoC.X;
    PontoC.Y;
    PontoC.Z;
    PontoC.DesenharPonto3D(PontoC);


    system("PAUSE");
    return 0;
}
