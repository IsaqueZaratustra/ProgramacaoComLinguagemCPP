# include <iostream>
# define PausarTexto "PAUSE"
# define PuleLinha "\n"
# define Retorne return 

int main()
{
    typedef char caractere;
    caractere Letra = 'C';
    std::cout << "Segundo código C++" << PuleLinha;
    system(PausarTexto);
    Retorne 0;
}