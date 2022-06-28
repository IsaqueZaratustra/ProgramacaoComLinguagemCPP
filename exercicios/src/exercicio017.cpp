# include <iostream>

int main(int argc, char const *argv[])
{
    int ArrayNegativoPositivo [5] [5]{
        {0,1,1,1,1},
        {-1,0,1,1,1},
        {-1,-1,0,1,1},
        {-1,-1,-1,0,1},
        {-1,-1,-1,-1,0},
};
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            std::cout << ArrayNegativoPositivo[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    system("Pause");
    return 0;
}
