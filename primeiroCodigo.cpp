#include <iostream>
// A diretiva de pré-processador #include indica para incluir o arquivo de cabeçalho iostream
int main()
//função princippal. Todo programa C++ começa com esta função principal
{ //indica o inicio de um bloco
    std::cout <<"Primeiro Código" << std::endl;
    system("color 5F");
    system("Pause");
    return 0;
// "cout" é o comando de saída de dados,neste caso está solicitando para colocar na saída padrão (tela) a frase especificada
//"endl" indica para inserir um caracter de quebra de linhas na frase ("string")
//"system("Pause")" chama o shell do windows (DOS) e coloca este comando PAUSE
//zero é o padrão para informa que tudo deu certo, assim se a funçãp main der certo ela retornaraá 0
}// indic a o fim de um bloco 