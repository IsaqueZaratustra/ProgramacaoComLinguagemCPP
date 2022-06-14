# include <iostream>
//prototipos
float soma (float num1, float num2);

int main(int argc, char const *argv[])
{
    std::cout << soma(100, 200) << std::endl;

    system ("Pause");
    return 0;
}

float soma (float num1, float num2){
    return num1 + num2;
}