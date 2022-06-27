#include <iostream>

int main(int argc, char const *argv[])
{
    int Matriz [5][5];

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (i==j)
            {
                std::cout << " 0 ";
            }else if (i<j)
            {
                std::cout << " 1 ";
            }else if (i>j){
                std::cout << "-1 ";
            }
    
        }
        std::cout<<std::endl;
    }
    
    system("Pause");
    return 0;
}
