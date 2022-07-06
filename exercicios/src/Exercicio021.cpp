// Exercício Cadastro de um livro utilizando structs
// Crie um programa que receba os dados: ID, Título, Autor, Editora, e Ano de um livro e coloque estes dados na tela 

#include <iostream>
#include <string>

struct Livros
{
    int ID;
    std::string Titulo;
    std::string Autor;
    std::string Editora;
    int Ano;
    void LivroNaTela (Livros Livro){
        std::cout << "Titulo: "<< Titulo << " Autor: "<< Autor << " Editora:" << Editora << "Ano:" << Ano << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Livros Livro1;
    Livro1.Titulo = "Design Thinking";
    Livro1.Autor = "Tim Brown";
    Livro1.Editora = "ABC";
    Livro1.Ano = 2022;
    Livro1.LivroNaTela(Livro1);

    system("Pause");
    return 0;
}
