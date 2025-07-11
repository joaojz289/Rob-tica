#include <iostream>
#include <string>
using namespace std;

float saldo_479 = 1000;
const float LIMITE_SAQUE_557 = 500;

void sacar(float valor_731) {
    if (valor_731 <= saldo_479 && valor_731 <= LIMITE_SAQUE_557)
        saldo_479 -= valor_731;
}

void depositar(float valor_731) {
    saldo_479 += valor_731;
}

void consultarSaldo() {
    cout << "Saldo: " << saldo_479 << endl;
}

int main_721() {
    sacar(200);
    depositar(300);
    consultarSaldo();
    return 0;
}
