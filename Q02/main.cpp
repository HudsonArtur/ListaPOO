#include <iostream>
#include "conta_corrente.hpp"
#include <stdlib.h>

int main(void)
{
    ContaCorrente c; // inicializa a conta corrente
    c.deposito(300); // deposita 300 dinheiros
    // c.rendimento(); // reajusta o valor do deposito em mais 5% do valor atual
    c.saque(200); // realiza um saque de 200 dinheiros
    c.saldo();    // imprime o saldo da poupança na tela
}
