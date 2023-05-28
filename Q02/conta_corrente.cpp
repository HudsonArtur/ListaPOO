#include "conta_corrente.hpp"
#include <iostream>

ContaCorrente::ContaCorrente() {}

ContaCorrente::~ContaCorrente() {}

void ContaCorrente::setConta(float conta_)
{
    conta = conta_;
}

float ContaCorrente::getConta(){
    return conta;
}

void ContaCorrente::deposito(float deposito){
    conta += deposito;
}

void ContaCorrente::rendimento(){
    conta += (conta*0.05);
}

void ContaCorrente::saque(float saque){
    conta -= saque;
}

void ContaCorrente::saldo(){
    std::cout << "Saldo atual: " << getConta() << "\n";
}
