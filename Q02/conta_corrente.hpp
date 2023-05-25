#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

class ContaCorrente
{
private:

    float conta;

public:
    // Construtor padrão
    ContaCorrente();

    // Destrutor
    ~ContaCorrente();

    // ************get e set da classe***********

    void setConta(float conta_);
    float getConta();
    // *************Fim do get e set*************

    // ***********Métodos da classe**************

    // Método para depositar valores na conta corrente
    void deposito(float deposito);

    // reajusta o valor do deposito em mais 5% do valor atual
    void rendimento();

    // Realiza um saque na conta corrente
    void saque(float saque);

    // Imprimi o saldo da conta corrente na tela
    void saldo();
};

#endif