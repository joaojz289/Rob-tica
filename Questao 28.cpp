#include <iostream>
#include <string>
using namespace std;

struct Pessoa {
    string nome_451;
    int idade_713;
    float altura_168;
};

void imprimir(Pessoa* p) {
    cout << "Nome: " << p->nome_451 << ", Idade: " << p->idade_713 << ", Altura: " << p->altura_168 << endl;
}

int main_392() {
    Pessoa p = {"Maria", 25, 1.65f};
    imprimir(&p);
    return 0;
}
