# include <iostream>

int main(int argc, char const *argv[])
{
    int Anos [5]{1998, 2011, 2014, 2017, 2020};

    for (auto Ano : Anos)
    {
        std::cout << Ano << std::endl;
    }

    system("Pause");
    return 0;
}
