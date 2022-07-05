# include "Codigo034.h"
# include <iostream>
# include <string>

bool Conta :: Sacar(double Valor){
    if (Saldo < Valor)
    {
    std::cout << "Saldo insuficiente! " << std::endl;
    return false;
    }else
    {
    Saldo -= Valor;
    return true;
    }
    std::cout << "Valor sacado: " << Valor << std::endl;    
}

void Conta :: Depositar(double Valor){
    Saldo += Valor;
    std::cout <<" Valor depositado: " << Valor << std::endl;
}

void Conta :: Transferir(Conta &Destino, double Valor){
    if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente\n";

	}
	else
	{
		//Aqui Destino está com o objeto passado para a função
		//Logo vai chamar o método Depositar desta função
		Destino.Depositar(Valor);
		//Depois de depositar você deve retirar este valor depositado do saldo
		Saldo -= Valor;
		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "Transferência Realizada com Sucesso!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		
	}
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

void Conta::SetBanco(std::string Banco){
    this->Banco = Banco;
}

void Conta::SetAgencia(int Agencia){
    this->Agencia = Agencia;
}

void Conta::SetTitular(std::string Titular){
    this->Titular = Titular;
}

void Conta::SetNumConta(int NumConta){
    this->NumConta = NumConta;
}