#include <iostream>
#include <string>
using namespace std;

void aprovado(float* nota) {
    if (*nota >= 7)
        cout << "Aprovado" << endl;
    else
        cout << "Reprovado" << endl;
}
