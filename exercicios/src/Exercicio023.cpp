// Exercicío cadastro de um livro utilizando struct
//crie um programa que receba os dados : ID , titulo, autor, editora e ano de 5 livros e coloque estes dados na tela.
# include <iostream>
# include <string>

struct Livros
{
    int ID;
    std::string Titulo;
    std::string Autor;
    std::string Editora;
    int Ano;

    void Mostrar(Livros Livro){
        std::cout << "\nID: "<< ID <<"\nTitulo: " << Titulo << "\nAutor: " << Autor << "\nEditora: " << Editora << "\nAno: " << Ano << std::endl;
    }

};

int main(int argc, char const *argv[])
{
    Livros Livro;
for (size_t i = 0; i < 5; i++)
{
    std::cout << "********************************"<<std::endl;
    std::cout << "ID: "<< std::endl;
    std::cin >> Livro.ID;
    std::cout << "Titulo do livro: " << std::endl;
    std::cin >> Livro.Titulo;
    std::cout << "Autor: " << std::endl;
    std::cin >> Livro.Autor;
    std::cout << "Editora: " << std::endl;
    std::cin >> Livro.Editora;
    std::cout << "Ano: " << std::endl;
    std::cin >> Livro.Ano;
    //system("Clear || CLS");
    Livro.Mostrar(Livro);
}

system("Pause");
return 0;       
}