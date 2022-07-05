# include <iostream>

struct Data
{
    int Dia;
    int Mes;
    int Ano;
};

int main(int argc, char const *argv[])
{
    Data Agenda;
    Agenda.Dia = 21;
    Agenda.Mes = 12;
    Agenda.Ano = 1999;

    std::cout << "Voce nasceu no dia " << Agenda.Dia << ", do mes " << Agenda.Mes << " e ano " << Agenda.Ano << std::endl;

    system("Pause");
    return 0;
}

