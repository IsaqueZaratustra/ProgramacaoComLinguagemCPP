# include "Codigo034.h"
# include <iostream>
# include <string>

bool Conta :: Sacar(double Valor){
    if (Saldo < Valor)
    {
    std::cout << "Saldo insuficiente! " << std::endl;
    }else
    {
    Saldo -= Valor;
    }
    std::cout << "Valor sacado: " << Valor << std::endl;    
}

void Conta :: Depositar(double Valor){
    Saldo += Valor;
    std::cout <<" Valor depositado: " << Valor << std::endl;
}

void Conta :: Transferir(Conta &Destino, double Valor){

}

double Conta :: ConsultarSaldo(){
    return Saldo;
}

std::string Conta :: GetBanco(){ 
    return Banco;
}

int Conta :: GetAgencia(){
    return Agencia;
}

int  Conta :: GetNumConta(){
    return NumConta;
}

std::string Conta :: GetTitular(){
    return Titular;
}




