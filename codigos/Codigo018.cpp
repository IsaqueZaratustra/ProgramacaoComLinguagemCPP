#include <iostream>

void Coordenadas (int x, int y, int z=15);

int main(int argc, char const *argv[])
{
    Coordenadas(5, 10);
    system("PAUSE");
    return 0;
}

void Coordenadas (int x, int y, int z){
    // x=x*10
    x *= 10;
    y *= 10;
    z *= 10;
    std::cout << x << " " << y << " " << z << std::endl;
}